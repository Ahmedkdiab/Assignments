/*\
 Prob03.c
Author: Ahmed Diab
 ==================================================================================
Description : Bubble sorting algorithm.
 =================================================================================
 */

#include <stdio.h>

#define SIZE 5


void bubbleSort(int *arr,int size);

int main(void){

	int Arr[SIZE]={-2,10,36,25,-9};
	int i;

	printf(" Before Sorting:\n");
	fflush(stdout);

	for(i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}

	bubbleSort(Arr, SIZE);
	printf("\nAfter Sorting\n");

	for(i=0;i<SIZE;i++){
		printf("%d\t",Arr[i]);
	}

	return 0;
}

void bubbleSort(int arr[],int size){

	int i,j,temp;

	for(i=0;i<size-1;i++){
		for(j=0;j<size-i-1;j++){
			if(arr[j]>arr[j+1]){
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
}

