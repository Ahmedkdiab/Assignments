/*
 * Prob03.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

void revers_Array(int *arr,int size);


int main(void){
	int i;

	int Arr[SIZE];
	printf("Enter Elements of Array:\n");
	for(i=0;i<SIZE;i++){
		fflush(stdout);
		scanf("%d",&Arr[i]);

	}

	printf("The original Array is\n");
	for(i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}

	revers_Array(Arr, SIZE);


	return 0;
}


void revers_Array(int *arr,int size){

	int i;
	int *ptr=arr;

	printf("\nThe Rversed Array is:\n");
	for(i=size-1;i>=0;i--){
		printf("%d\t",*(ptr+i));
	}


}
