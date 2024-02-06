#include <stdio.h>

void foo(void){ 
    printf("%s", "foo");
}

/*
 * Especificar los parametros es obcional. Sin embargo hay diferencias entre
 * C y C++, en C++ la función int *fi() es una función que no acepta ningún
 * parametri y evuelve un puntero a int. En C esta misma función acepta 
 * cualquier numero de argumentos de cualquier tipo y devuelve un puntero
 * a int.
 *
 * Nunca se debe declarar una función en C sin parametros definidos. (1) es
 * una funcionalidad deprecada y (2) hace que no sea portable con seguridad
 * a C++; por lo que es buena práctica usar void en la declaración de una 
 * función cuando esta no acepta ningún parametro.
 * */

void faa(void){
    printf("%s", "foo");
}

void fee(void){
    printf("%s", "foo");
}

int func(int arr[]){
    return 0;
}

int main(){
    int arry1[] = {4, 5, 6};
    printf("Escribiendo un elemento %d\n",arry1[2]);
    
    int arry2[2];
    printf("Asignando elemento posicion 1 un 2 => %d\n", arry2[1] = 2);

    int nums[2][2]; //Multidimensional. nums es un array de dos arrays
                    //cada uno con dos enteros

/*==============*/
    char str[11];
    for (unsigned int i = 0; i < 10; ++i) {
        str[i] = '0' + i; //str[i] es aquí identico a *(str + 1) 
        //str es convertido en un puntero a el primer elemento
    }
    str[10] = '\0';
    printf("%s", &str[10]); //Si el operando & es el resultado del operador []
                            //la expresión es igual a str + 10
    printf("%s", str);

/*==============*/
    unsigned int i = 0;
    unsigned int j = 0;
    int arr[3][5];
    func(arr[i]);//Equivalente a *(arr+i)
                 //1.arr se vuelve un puntero al primer array de 5 elementos
                 //de tipo int en la posición i.
                 //2.i escala al tipo de arr multiplicadolo por el tamaño 
                 //de un array de 5 elementos
                 //3.Se suman los dos pasos anteriores
                 //3.Se aplica indirección para generar un array de 5yelementos
                 //de tipo int
    //*(arr + 1)
    //*arr[0][i]
    //          => *(arr+i)
    //i[5]
    
    int x = arr[i][j]; //produce un objeto int, arr se vuelve un puntero al primer elmento
    
    //El identificador de un array genera un puntero al primer elemento
    //por lo que a[i] = *(a+1)
    
/*==============*/
    void (*p[3])(void) = {foo, faa, fee}; //Array de punteros de funciones
    (*p[0])(); //uso de la función del indice 0
    
    /* funcs[] es un array
     * *funcs[] es un array de punteros
     * (*funcs[])(void) es un array de punteros a funciones sin parametros
     * void (*funcs[])(void) es un array de punteros a funciones sin 
     * parametros que devuelven void
     * */

    return 0;
}
