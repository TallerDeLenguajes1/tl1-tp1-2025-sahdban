#include <stdio.h>

int cuadrado(int a);
void cuadradod(int *a);
void mostrar(int a);
void invertir(int *a, int *b);
void orden(int *a, int *b);

int main() {
    int a,b;
    printf("ingresar a y b");
    scanf("%d %d", &a, &b);
    int cuad = cuadrado(a);
    mostrar(a);
    cuadradod(&a);
    mostrar(a);
    invertir(&a,&b);
    mostrar(a);
    mostrar(b);
    orden(&a,&b);
    mostrar(a);
    mostrar(b);

    return 0;
}

int cuadrado(int a) {
    int b = a * a;
    return b;
}

void cuadradod(int *a) {
    int b = *a;
    *a = b * b;
}

void mostrar(int a) {
    printf("variable: %d\n", a);
}

void invertir(int *a, int *b) {
    int c = *a;
    *a = *b;
    *b = c;
}

void orden(int *a, int *b) {
    if (*a > *b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
}
