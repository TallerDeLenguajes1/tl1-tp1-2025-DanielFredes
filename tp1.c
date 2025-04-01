/*a) Haga una función que devuelva el cuadrado de un número
b) Haga la función anterior, pero devolviendo un tipo void
c) Al recibir una variable muestre por pantalla la dirección y el contenido de
la variable
d) Dado dos parámetros de entrada, deberá invertir los valores entre
ambos.
void Invertir(a,b) //deberá devolver en el valor de a en la
variable b, y en el valor de b el valor de a
e) Dado dos parámetros de entrada, deberá devolverlos de forma
ordenada, en el primer parámetro el menor y en el segundo el mayor.
void orden(a,b) //deberá devolver en el valor de a el valor más
chico, y en el valor de b el valor más grande
f) Utilice las funciones anteriores para leer pares de valores e imprimirlos
por pantalla.
g) Al finalizar, debe subir todos los cambios al repositorio, usando los
siguientes comandos.
i. git add .
ii. git commit -m “ejercicio 2.4 completado”
iii. git push
*/

#include <stdio.h>

// a) Función que devuelve el cuadrado de un número
int cuadrado(int num1) {
    return (num1 * num1);
}

// b) Función que calcula el cuadrado pero con tipo void
void cuadrado2(int num1) {
    printf("Numero al cuadrado: %d \n", num1 * num1);
}

// c) Función que muestra dirección y contenido de una variable
void mostrarVariable(int *var) {
    printf("Direccion de la variable: %p\n", (void*)var);
    printf("Contenido de la variable: %d\n", *var);
}

// d) Función que invierte los valores entre dos variables
void Invertir(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// e) Función que ordena dos valores (menor en a, mayor en b)
void orden(int *a, int *b) {
    if (*a > *b) {
        Invertir(a, b);
    }
}

// f) Función para leer pares de valores e imprimirlos
void leerParesYMostrar() {
    int a, b;
    
    printf("Ingrese dos numeros separados por espacio: ");
    scanf("%d %d", &a, &b);
    
    printf("Valores originales: a = %d, b = %d\n", a, b);
    
    // Mostrar direcciones y contenidos
    printf("Variable a: ");
    mostrarVariable(&a);
    printf("Variable b: ");
    mostrarVariable(&b);
    
    // Invertir y mostrar
    Invertir(&a, &b);
    printf("Valores invertidos: a = %d, b = %d\n", a, b);
    
    // Ordenar y mostrar
    orden(&a, &b);
    printf("Valores ordenados: a = %d (menor), b = %d (mayor)\n", a, b);
    
    // Mostrar cuadrados
    printf("Cuadrado de a: %d\n", cuadrado(a));
    printf("Cuadrado de b: ");
    cuadrado2(b);
}

int main() {
    // Ejemplo de uso de las funciones
    int x = 5;
    
    printf("Ejercicio a) Cuadrado de 5: %d\n", cuadrado(x));
    
    printf("Ejercicio b) ");
    cuadrado2(x);
    
    printf("Ejercicio c) ");
    mostrarVariable(&x);
    
    int a = 3, b = 8;
    printf("Ejercicio d) Antes de invertir: a=%d, b=%d\n", a, b);
    Invertir(&a, &b);
    printf("         Despues de invertir: a=%d, b=%d\n", a, b);
    
    a = 10; b = 4;
    printf("Ejercicio e) Antes de ordenar: a=%d, b=%d\n", a, b);
    orden(&a, &b);
    printf("         Despues de ordenar: a=%d (menor), b=%d (mayor)\n", a, b);
    
    printf("\nEjercicio f)\n");
    leerParesYMostrar();
    
    return 0;
}