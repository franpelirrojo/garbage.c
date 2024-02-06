#include <stdio.h>

int busquedaBinaria(int arr[], int length, int target){ //O(logN)
    int min = 0;
    int max = length;
    int mitad = (min + length)/2;
   
    do {
        mitad = (min + length)/2;
        int value = arr[mitad];
        
        if (value == target) {
            return mitad; 
        }else if (value > mitad) {
            min = mitad + 1; 
        }else {
            max = mitad;
        }
    
    }while (min < max);

    return -1;
}

/* Importante.
 * Cuando se pasa un array a una función lo que se pasa es un puntero,
 * NO se pasa por copia. Por lo que dice esta declaración es int *arr.
 * Cómo resultado nuestro problema, no podemos usar sizeof() fuera del
 * alcance(scope) de la declaracion, es decir main, ya que la información
 * sobre la longitud del array se ha perdido al entrar en la función.
 * */
int busquedaLineal(int arr[], int length, int target){ //O(N)
    for (int i = 0; i < length; i++){
        if (arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main(void){
    int a[] = {7,3,5};
    int b[] = {0,1,2,3,4,5,6,7,8};
    printf("indice %d\n",busquedaLineal(a, 3, 5));
    printf("el indice en la busqueda binaria es %d\n", busquedaBinaria(b, 9, 5));
    return 0;
}
