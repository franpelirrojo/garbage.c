#include <stdio.h>
#include <math.h>

int main () {
    //Esto es una variable
    int num = 5;
    printf("Este puede cambiar %d\n",num);
    num++;
    printf("Este este cambió %d\n",num);

    //Esto es una constante
    const int CONS = 9;
    printf("Este no puede cambiar %d", CONS);

    /* Esto es un bloque de comentario clasico de C
     * y los numeros a fuego son tecnicamente constantes
     * también.*/
    printf("Los integer se vuelven decimales %f\n", 7 + 2.5);
    printf("Esto es 2 al cubo %f\n", pow(2, 3));
    printf("Puedo calcular la raiz cuadrada %f\n", sqrt(68));
    printf("Puedo redondear hacia arriba %f\n", ceil(78.9));
    printf("Puedo redondear hacia abajo %f\n", floor(78.9));

    char op;
    printf("Dame el la operacion\n");
    scanf("%c", &op);

    if (op == '+') {
        printf("%d", 7+7);
    }else if (op == '-'){
        printf("%d", 7-7);
    }

    int x = 0;
    while (x <= 1000) {
        printf("%d\n", x);
        x++;
    }
    
    return 0;
}
