/* Using Figure 2.2 as a model, illustrate the operation of Insertion-Sort
   on the array A = (31, 41, 59, 26, 41, 58). */

#include <stdio.h>

void isort(int *arr, int length);

void main(void){
	int A[] = {31, 41, 59, 26, 41, 58};

	//Send our array to be sorted
	isort(A, 6);
	
	// Pray we are right and get 26 31 41 41 58 59 as output!
	int i;
	for (i=0; i<6; i++){
		printf("%d ", A[i]);
	}
	printf("\n");
}

// isort takes an array and orders by moving numbers one by one from left to right
void isort(int *arr, int length){
	int i, j, key;
	for (j=1; j<length; j++){
		key=arr[j];
		i = j-1;
		while (i>=0 && arr[i] > key){
			arr[i+1] = arr[i];
			i=i-1;
		}
		arr[i+1]=key;
	}
}
