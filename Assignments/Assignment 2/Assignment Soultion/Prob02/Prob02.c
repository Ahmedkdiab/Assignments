/*\
 Prob02.c
Author: Ahmed Diab
 ====================================================================================
Description : Function that takes one character and checks if it alphabet or not.
 ====================================================================================
 */

#include <stdio.h>

int check_alphabet(char input); // Function Prototype


int main(void){

	char x;
	printf("Enter One Character: ");
	fflush(stdout);
	scanf("%c",&x);

	if(check_alphabet(x)){
		printf("%c is Alphabet",x);
	}

	else{
		printf("%c is Not Alphabet",x);

	}


	return 0;
}

/*************** Functions Definitions ***************/

int check_alphabet(char input){

	if(input>='A' || input>='a'){

		return 1;

	}

	else{
		return 0;
	}
}


