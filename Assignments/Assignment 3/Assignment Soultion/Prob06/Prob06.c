/*\
 Prob06.c
Author: Ahmed Diab
 ==================================================================================
Description : Linear Search Algorithm.
 =================================================================================
 */

#include <stdio.h>

#define SIZE 5

int linearSearch(int *arr,int size, int x);

int main(void){

	int Arr[SIZE]={1,2,3,4,4};
	int n=4;
	int index=linearSearch(Arr, SIZE, n);
	if(n==-1){
		printf("Element Not Found:");
	}

	else{
		printf("Index of last occurrence of %d is %d" ,n,index);

	}


	return 0;
}

int linearSearch(int *arr,int size, int x){

	int i,lastindex=-1;

	for(i=0;i<size;i++){
		if(arr[i]==x){
			lastindex=i;
		}
	}

	return lastindex;
}


