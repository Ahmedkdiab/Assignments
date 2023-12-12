/*
 Prob16.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

void reveres(int *arr,int length);

int main(void){

	int Arr[SIZE]={1,2,3,4,5};
	printf("The Array is :\n");
	for(int i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}
	reveres(Arr,SIZE);

	printf("\nThe Reversed array is:\n");

	for(int i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}


	return 0;
}

void reveres(int *arr,int length){

	int i,j,temp;
	for(i=0,j=length-1;i<j;i++,j--){
		temp=arr[i];
		arr[i]=arr[j];
		arr[j]=temp;

	}
}

