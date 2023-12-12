/*\
 Prob03.c
Author: Ahmed Diab
 ====================================================================================
Description : Function that check if the number if positive or negative.
 ====================================================================================
 */

#include <stdio.h>

int check_number(int x);


int main(void){


	int a;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&a);
	if(check_number(a)){
		printf("%d is positive",a);
	}
	else{
		printf("%d is negative",a);
	}


	return 0;
}

int check_number(int x){

	if(x>0){
		return 1;
	}
	else {
		return 0;
	}
}


