#include <stdio.h>
#include <stdbool.h>

int main() {
    //Declaración multiple
    char *src, c; //src es un char* mientras c un char
    int x, y[5]; //válido

    typedef unsigned int uint; //uint es el alias de unsigned int  

    // Tipos numerales
    int age = 40;
    long largo = 41000412;
    long long larguisimo = 9000000000;
    //Los enum son tipos numericos
    enum day { sun, mon, tue, wed, thu, fri, sat };//GCC usa unsigned int
    enum months { jan = 1, feb, mar, apr, may, jun, jul, aug, sep, oct, nov, dec };
    enum cardinal_points { north = 0, east = 90, south = 180, west = 270 };
    float flotante = 9.9;
    double dobleflotante = 9.0000009;
    long double doblelargo = 0.1;

    char letra = 'A';
    char frase[] = "cadena de texto string";

    _Bool boolean = true; //palabra reservada desde C99 para no romper implementaciones
    bool truth = false; //<stdbool.h> implementación del estandar
    
    /* Las constantes son inmutables ya que se alojan en espacios de memoria
     * de sólo lectura. Sin embargo si un puntero es tiene el adjetivo cons
     * puede ser modificado el objeto al que apunta. Intentar hacer lo mismo
     * si el objeto al que apunta es una constante genera un comportamiento
     * indefinido y posible error*/
    int i = 12;
    const int *ip = &i;
    *(int *)ip = 42;


    return 0;
}
