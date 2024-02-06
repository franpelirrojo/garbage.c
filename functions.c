#include <stdio.h>
#include <stdlib.h>

// C diferencia entre pàrametros y argumentos
// C llama/pasa por valor NO por referencia cuando pasamos un puntero 
// cómo parametro sigue siendo copia. Simula paso por referencia.

void swap(int *px, int *py) { //pámetros: objetos incluidos en la declaración
    int t = *px; //el tipo del puntero es "puntero a *loquesea*"
    *px = *py; //dereferenciar hace que se lea o reemplace el valor alojado
    *py= t;
    return;
}

int main() {
    int a = 2;
    int b = 5;

    printf("main: a = %d, b = %d\n", a, b);
    swap(&a, &b); //Argumentos: expresiones incluidas en la llamada
    printf("swap: a = %d, b = %d\n", a, b);

    return 0;
}
