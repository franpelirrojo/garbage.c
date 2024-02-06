#include<stdio.h>

int main () {
    int valor = 30;
    int *pValor = &valor; //Es un tipo de dato: una referencia de memoria
                          //& devuelve la dirección

    printf("El valor de a es %d\n", valor);
    printf("la direccion de memoria es %p\n", pValor);
    printf("El contenido de la direccion de memoria es %d\n", *pValor);//Podemos desreferenciar

    return 0;
}
