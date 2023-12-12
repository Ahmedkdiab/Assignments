/*\
 Prob16.c
Author: Ahmed Diab
 ====================================================================================
Description : Function to count the number of 1’s in an unsigned 8-bit integer..
 ====================================================================================
 */

#include <stdio.h>

int count_Ones(unsigned char num);


int main(void){

	unsigned char input;
	printf("Enter unsigned 8-bit integer: ");
	fflush(stdout);
	scanf("%hhu",&input);

	printf("the Number of %hhu is %d ",input,count_Ones(input));

	return 0;
}



int count_Ones(unsigned char num){

	int count=0;

	while(num!=0){

	count+=num&1;
	num=num>>1;
	}

	return count;


}


