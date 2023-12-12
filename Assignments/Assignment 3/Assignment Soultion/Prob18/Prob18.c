/*
 * Prob18.c
 *
 *  Created on: Apr 23, 2023
 *      Author: Ahmed Diab
 */
#include <stdio.h>

#define SIZE 10

int longestconsecutive(int *arr,int size,int x);

int main(void){

	int i,num=3;
	int Arr[SIZE]={1,2,3,3,3,3,4,4,3,3};
	printf("The Array is:\n");
	fflush(stdout);
	for(i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}
	int reuslt=longestconsecutive(Arr, SIZE, num);
	printf("\nLongest consecutive count of %d is %d",num,reuslt);


	return 0;
}

int longestconsecutive(int *arr,int size,int x){

	int i,count=0,max=0;

	for(i=0;i<size;i++){
		if(arr[i]==x){
			count++;
		}
		else if(count>max){
			max=count;
			count=0;
		}
	}

	if(count>max){
		max=count;
	}

	return max;

}

