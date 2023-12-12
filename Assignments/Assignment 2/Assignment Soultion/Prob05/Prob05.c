/*\
 Prob05.c
Author: Ahmed Diab
 ====================================================================================
Description : Function to check  the number is an even  or an odd
 ====================================================================================
 */

#include <stdio.h>

int oddoreven(int x);

int main(void){

	int input, result;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&input);

	result=oddoreven(input);

	if(result==0){

		printf("Your Number is Even");
	}

	else {
		printf("Your Number is odd");
	}



	return 0;
}


int oddoreven(int a){

	if(a%2==0){
		return 0;
	}

	else{
		return 1;
	}
}


