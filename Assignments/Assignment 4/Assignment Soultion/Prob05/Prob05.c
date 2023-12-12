/*
 * Prob05.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

void Copy_Array(int *arr1,int *arr2,int size);


int main(void){
	int i;

	int Arr1[SIZE]={10,20,30,40,50};
	int Arr2[SIZE];

	printf("The Array 1 is\n");
	for(i=0;i<SIZE;i++){
		printf("%d\t",Arr1[i]);
	}

	printf("\nThe Copied Array\n");
	Copy_Array(Arr1, Arr2, SIZE);

	return 0;
}

void Copy_Array(int *arr1,int *arr2,int size){

	int i;
	int *ptr1=arr1;
	int *ptr2=arr2;

	for(i=0;i<size;i++){

		*(ptr2+i)= *(ptr1+i);

	}

	for(i=0;i<size;i++){
		printf("%d\t",arr2[i]);
	}

}

