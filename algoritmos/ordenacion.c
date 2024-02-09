#include <stdio.h>
#include <math.h>

void ordenarBurbuja2(int arr[], int length){ // Correcta O(n^2)
	int i = length;
	while(i-- > 1){ //primero evalúa y despues sustrae
		for (int k = 0; k < i; k++){
			if (arr[k] > arr[k+1]){
				int s = arr[k+1];
				arr[k+1] = arr[k];
				arr[k] = s;
			}
		}	
	}	
}

void ordenarBurbuja1(int arr[], int length){ // Incorrecta
	int i = length;
	while(i > 0){
		for (int k = 0; k < i; k++){
			if (arr[k] > arr[k+1]){
				int s = arr[k+1];
				arr[k+1] = arr[k];
				arr[k] = s;
			}
		}	
	}	
}

int main (void){
	int arr[] = {0,3,58,0,92,9,1,4,7,1,10,22,67,7,2,1};
    int length = sizeof(arr)/sizeof(int);
    
    ordenarBurbuja2(arr, length);
	for (int i = 0; i < length; i++){
		printf("%d\n", arr[i]);
	}

    return 0;
}
