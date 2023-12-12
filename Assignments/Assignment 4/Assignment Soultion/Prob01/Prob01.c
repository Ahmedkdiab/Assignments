/*
 * Prob01.c
 *
 *  Created on: Apr 29, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 5

int main(void){

	int arr[SIZE]={1,2,3,4,5};
	int sum=0;
	int *ptr=arr;

	for(int i=0;i<SIZE;i++){

		sum+=*ptr;
		ptr++;
	}

	printf("The sum of Array is %d",sum);


	return 0;
}

