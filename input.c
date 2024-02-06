#include <stdio.h>

int main() {
    int age;
    printf("Dame tu edad: ");
    scanf("%d", &age); //scanf es inseguro, scanf_s es una mejora de microsoft
                         //por lo que gcc tine eproblemas para compilar, pero
                         //clang no. gcc produce mejor código. 

    printf("Tienes %d a%cos\n", age, 164); //c funciona en ASCII
    
    char name[20];
    fgets(name, 20, stdin); //scanf solamente escanea hasta el primer espacio
                            //en blanco, fgets captura también el último salto 
                            //de linea

    double dou1;
    double dou2;
    printf("Dame el primer número:\n");
    scanf("%lf", &dou1);
    printf("%f\n", dou1);
    printf("Dame el segundo número:\n");
    scanf("%lf", &dou2);
    printf("%f\n", dou2);

    return 0;
}
