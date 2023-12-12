/*\
 Prob013.c
Author: Ahmed Diab
 ====================================================================================
Description : Function Determine the integer floor of the sum.
 ====================================================================================
 */

#include <stdio.h>

int integer_sum(float a, float b);


int main(void){

	float x,y;
	int sum;
	printf("Enter First float Number: ");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter second float Number: ");
	fflush(stdout);
	scanf("%f",&y);

	sum=integer_sum(x,y);
	printf("The Sum of %.2f and %.2f is %d ",x,y,sum);






	return 0;
}

int integer_sum(float a, float b){

	return a+b;
}



