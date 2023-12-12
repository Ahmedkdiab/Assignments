/*
 * Prob20.c
 *
 *  Created on: Apr 10, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

int count_ones(unsigned short input);


int main(void){

	unsigned short num;
	int result;

	printf("Enter Number: ");
	fflush(stdout);
	scanf("%hu",&num);
	result=count_ones(num);
	printf("The Number of %hu is %d",num,result);


	return 0;
}


int count_ones(unsigned short input){

	int count=0;

	while(input!=0){

		count+=input&1;
		input=input>>1;
	}

	return count;
}

