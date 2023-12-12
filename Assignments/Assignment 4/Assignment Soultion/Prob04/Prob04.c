/*
 * Prob04.c
 *
 *  Created on: Apr 29, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

int smallest(int *arr,int size);


int main(void){

	int Arr[SIZE]={10,25,3,18,24};
	int result=smallest(Arr, SIZE);
	printf("The smallest value of array is %d",result);


	return 0;
}

int smallest(int *arr,int size){
	int i;
	int *ptr=arr;
	int min=arr[0];

	for(i=1;i<size;i++){

		if(arr[i]<min){
			min=arr[i];
		}
		ptr++;
	}


	return min;
}
