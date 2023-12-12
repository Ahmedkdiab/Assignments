/*\
 Prob15.c
Author: Ahmed Diab
 ====================================================================================
Description : Function to count the number of 1’s in an unsigned 32-bit integer..
 ====================================================================================
 */

#include <stdio.h>

int countOnes(unsigned num);


int main(void){

	unsigned input;
	printf("Enter unsigned 32-bit integer: ");
	fflush(stdout);
	scanf("%u",&input);
	printf("The number of 1’s for %u is %d ",input,countOnes(input));


	return 0;
}

int countOnes(unsigned num){

	int count=0;

	while(num!=0){

		count+=num&1;
		num=num>>1;

	}
	return count;
}


