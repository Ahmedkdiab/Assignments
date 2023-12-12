/*\
 Prob011.c
Author: Ahmed Diab
 ====================================================================================
Description : Function if the input number is a power of 2 or not.
 ====================================================================================
 */

#include <stdio.h>

int power_of2(int input);


int main(void){

	int num,result;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&num);
	result=power_of2(num);
	if(result==1){

		printf("%d is a power of 2",num);
	}

	else{

		printf("%d is not a power of 2",num);
	}

	return 0;
}


int power_of2(int input){

	if(input==0){
		return 0;
	}

	while(input%2==0){  // keep dividing by 2 until we can't anymore (even numbers)
		input/=2;
	}

	if(input ==1){   // if we end up with 1, it was a power of 2
		return 1;
	}

	else {    // otherwise, it wasn't a power of 2
		return 0;
	}
}
