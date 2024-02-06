#include <stdio.h>
#include <math.h>

void ordenarBurbuja(int arr[], int length){
	int i = length;
	while(i-- > 0){
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
	int arr[] = {9,3,5,7,2,1};
	ordenarBurbuja(arr, 6);
	for (int i = 0; i < 6; i++){
		printf("%d\n", arr[i]);
	}

    return 0;
}
