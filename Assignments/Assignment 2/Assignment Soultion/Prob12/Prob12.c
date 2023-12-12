/*\
 Prob013.c
Author: Ahmed Diab
 ====================================================================================
Description : Function Calculate Heat Time.
 ====================================================================================
 */

#include <stdio.h>

int heat_time(int input);

int main(void){

	int temp,result;
	printf("Enter The temperature: ");
	fflush(stdout);
	scanf("%d",&temp);
	result=heat_time(temp);
	printf("The Required Time for %dC is %d",temp,result);


	return 0;
}

int heat_time(int input){

	if(input<=30){
		return 7;
	}

	else if (input<=60){
		return 5;
	}

	else if(input<=90){
		return 3;
	}

	else if(input<=99){
		return 1;
	}

	else {
		return 0;
	}

}


