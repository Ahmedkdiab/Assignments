/*
 * Prob22.c
 *
 *  Created on: Apr 26, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 10

int remove_Duplicates(int *arr1,int arr1_size,int *arr2,int arr2_size);

int main(void){
	int size2=0;
	int Arr2[SIZE];
	int Arr[SIZE]={1,2,3,3,4,5,5,5,6,6};
	printf("The Original Array is\n");
	fflush(stdout);
	for(int i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}

	size2=remove_Duplicates(Arr, SIZE, Arr2, SIZE);

	printf("\nThe New Array is\n");

	for(int i=0;i<size2;i++){
		printf("%d\t",Arr2[i]);
	}

	printf("\n");

	return 0;
}

int remove_Duplicates(int *arr1,int arr1_size,int *arr2,int arr2_size){

	if (arr1_size==0){
		return -1;
	}

	int i,j=0;
	arr2[j++]=arr1[0];   // copy first element to new array

	for(i=1;i<arr1_size;i++){
		if(arr1[i]!=arr1[i-1]){
			arr2[j++]=arr1[i];  // copy non-duplicate element to new array

		}


	}

	return j;   // return size of new array
}
