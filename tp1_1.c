#include <stdio.h>

int main(void)
{
    printf("Hola mundo\n");

    int numero = 1, *puntero = &numero;

    printf("contenido del puntero: %d\n y la direccion del puntero es: %p\n Direccion de la memoria de la variable %p\n Direccion de memoria del puntero %p\n Tamano de memoria utilizado por la variable usando Sizeof %d\n", *puntero, puntero, &numero, &puntero), sizeof(puntero);
    return 0;
}