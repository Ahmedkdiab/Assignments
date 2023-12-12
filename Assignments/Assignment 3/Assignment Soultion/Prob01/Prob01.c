/*\
 Prob01.c
Author: Ahmed Diab
 ==================================================================================
Description : Sum of Array.
 =================================================================================
 */
#include <stdio.h>

#define SIZE 7

int summation(int *number, int size);

int main(void){

	int summationof;
	int Arr[SIZE];

	printf("Enter The Elements of Array:\n");
	fflush(stdout);

	summationof=summation(Arr, SIZE);
	printf("\nThe sum of Array is %d",summationof);

	return 0;
}

int summation(int *number, int size){

	int i,sum=0;

	for(i=0;i<size;i++){
		scanf("%d",&number[i]);
	}
	for(i=0;i<size;i++){

		printf("%d\t",number[i]);

		sum+=number[i];
	}
	return sum;
}


