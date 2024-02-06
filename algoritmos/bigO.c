#include <stdio.h>
#include <string.h>

int worst(void){ //Es O(N) siempre consideramos la peor opción
    int sum = 0;
    char string [50];
    for(int i = 0; i < strlen(string); i++){
        if (string[i] == 'E'){
            return sum;
        }

        sum++;
    }

    return sum;
}

void constans(void){ //0(2N) -> 0(N) se despejan las constantes
    int x = 0;
    for (int i = 0; i < 10; i++){
        x++;
    }
    
    for (int i = 0; i < 10; i++){
        x++;
    }
}

void linear(void){
    char string[50];
    int leng = strlen(string);
    for (int i = 0; i < leng; i++){ //0(N) crece linealmente
        printf("%c", string[i]);
    }
}

int main(void){
    return 0;
}
