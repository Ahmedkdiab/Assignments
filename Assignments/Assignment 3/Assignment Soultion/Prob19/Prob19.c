/*
 * Prob19.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

int compare(int *arr1,int *arr2,int size);

int main(void){

	int Arr1[SIZE]={1,2,3,4,5};
	int Arr2[SIZE]={1,2,3,4,6};
	int reuslt=compare(Arr1, Arr2, SIZE);
	printf("The compare Array is %d",reuslt);
	fflush(stdout);

	return 0;
}

int compare(int *arr1,int *arr2,int size){

	int i;
	for(i=0;i<size;i++){

		if(arr1[i]!=arr2[i]){
			return 1;
		}

	}
	return 0;


}

