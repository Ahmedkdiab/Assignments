/*
 * Prob24.c
 *
 *  Created on: Apr 26, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5


int large_num(int *arr, int size);

int main(void){

	int result;
	int Arr[SIZE]={10,25,3,6,8};
	printf("The Array is:\n");
	for(int i=0;i<SIZE;i++){

		printf("%d\t",Arr[i]);
	}

	result=large_num(Arr, SIZE);
	printf("\nThe Second Largest Value is: %d",result);

	return 0;
}

int large_num(int *arr, int size){

	int i;
	int max=arr[0];
	int max2=arr[0];

	for(i=0;i<size;i++){
		if(arr[i]>max){
			max2=max;
			max=arr[i];
		}
		else if(arr[i]>max2){
			max2=arr[i];
		}
	}



	return max2;
}
