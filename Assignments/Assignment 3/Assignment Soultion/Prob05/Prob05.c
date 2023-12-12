/*
 * Prob05.c
/*\
 Prob05.c
Author: Ahmed Diab
 ==================================================================================
Description : Linear Search Algorithm.
 =================================================================================
 */

#include <stdio.h>
#define SIZE 6

int linearSearch(int *arr,int size,int index);


int main(void){

	int Arr[SIZE]={1,2,3,4,4,4};
	int x=4;
	int n=linearSearch(Arr, SIZE, x);
	if(x==-1){
		printf("Element Not Found:");
	}

	else {
		printf("Index of first occurrence of %d is %d" ,x,n);
	}


	return 0;
}

int linearSearch(int arr[],int size,int index){

	int i;

	for(i=0;i<size;i++){

		if(arr[i]==index){
			return i;
		}
	}



	return -1;
}

