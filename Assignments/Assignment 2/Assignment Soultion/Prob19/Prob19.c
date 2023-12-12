/*\
 Prob019.c
Author: Ahmed Diab
 ====================================================================================
Description : Function if the input number is a power of 3 or not.
 ====================================================================================
 */

#include <stdio.h>

int power_of3(int input);

int main(void){

	int x,result;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&x);

	result=power_of3(x);

	if(result==0){
		printf("True");
	}

	else {
		printf("No");
	}


	return 0;
}

int power_of3(int input){

	if(input==0){
		return 1;
	}

	while(input%3==0){

		input/=3;

	}

	return (input==1)? 0:1;






}

