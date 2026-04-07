#include <stdio.h>

int main() {
    printf("hola mundo\n");
    int numero = 0;
    int *puntero;
    puntero = &numero;

    printf("el contenido del puntero: %d\n", *puntero);
    printf("la direccion de memoria almacenada por el puntero: %p\n", puntero);
    printf("la direccion de memoria de la variable: %p\n", &numero);
    printf("la direccion de memoria del puntero: %p\n", &puntero);
    printf("tamaño de la variable: %d\n", sizeof(puntero));
    return 0;

}