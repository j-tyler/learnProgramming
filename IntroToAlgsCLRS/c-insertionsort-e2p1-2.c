/* Using Figure 2.2 as a model, illustrate the operation of Insertion-Sort
   on the array A = (31, 41, 59, 26, 41, 58).
   this time order it in decreasing values */

#include <stdio.h>

void isort2(int *arr, int length);

void main(void){
        int A[] = {31, 41, 59, 26, 41, 58};

        //Send our array to be sorted
        isort2(A, 6);

        // Pray we are right and get 59 58 41 41 31 26 as output!
        int i;
        for (i=0; i<6; i++){
                printf("%d ", A[i]);
        }
        printf("\n");
}

// isort takes an array and orders by moving numbers one by one from left to right
void isort2(int *arr, int length){
        int i, j, key;
        for (j=length-2; j>=0; j--){
                key=arr[j];
                i = j+1;
                while (i<length && arr[i] > key){
                        arr[i-1] = arr[i];
                        i=i+1;
                }
                arr[i-1]=key;
        }
}
