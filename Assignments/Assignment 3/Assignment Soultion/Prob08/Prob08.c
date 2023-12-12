/*
 * Prob08.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 10

int main(void){
	int Arr[SIZE];
	int i;
	Arr[0]=1;
	printf("The %dth term of the series is:\n",SIZE);
	printf("%d\t",Arr[0]);

	for(i=1;i<SIZE;i++){
		Arr[i]=Arr[i-1]*3;
		printf("%d\t",Arr[i]);
	}


	return 0;
}

