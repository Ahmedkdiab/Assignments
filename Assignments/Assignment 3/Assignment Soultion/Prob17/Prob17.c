/*
 * Prob17.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE_A 5
#define SIZE_B 3


void swap_array(int *A,int size_A,int *B,int size_B);

int main(void){

	int Arr_A[SIZE_A]={1,2,3,4,5};
	int Arr_B[SIZE_B]={6,7,8};
	int i;

	printf("The original A:\n");
	for(i=0;i<SIZE_A;i++){
		printf("%d\t",Arr_A[i]);
	}

	printf("\nThe original B:\n");
	for(i=0;i<SIZE_B;i++){
		printf("%d\t",Arr_B[i]);
	}

	swap_array(Arr_A, SIZE_A, Arr_B, SIZE_B);

	printf("\nThe Swapped A:\n");
	for(i=0;i<SIZE_A;i++){
		printf("%d\t",Arr_A[i]);
	}

	printf("\nThe Swapped B:\n");
	for(i=0;i<SIZE_B;i++){
		printf("%d\t",Arr_B[i]);
	}


	return 0;
}



void swap_array(int *A,int size_A,int *B,int size_B){

	int i;
	int temp[size_B]; // temporary array to hold the contents of B


	// copy the contents of B into temp
	for(i=0;i<size_B;i++){
		temp[i]=B[i];
	}


	// move the contents of A to B
	for(i=0;i<size_A;i++){
		B[i]=A[i];
	}


	// move the contents of temp (B) to A
	for(i=0;i<size_B;i++){
		A[i]=temp[i];
	}
}

