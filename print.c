#include<stdio.h>

int num() {
    return 1;
}

int main() {
    puts("Esto es un texto sin formato");
    printf("Mi %s favorito es %d\n", "numero", 500);
    printf("Mi %s %s favorito es %f\n", "numero", "segundo",2.5);
    printf("Mi %s favorito es %c\n", "caracer", 'z');
    
    //La funcion printf esper en %d un numero, da igual la expresión
    printf("El numero es %d\n", 8 + 7);
    printf("El numero es %d\n", num());

    int num = 8;
    printf("%p\n", num); //Imprimimos la dirección de memoria
    return 0;
}
