/*
 * Prob12.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 50

int lengthofstr(char *str);

int main(void){

	char string[SIZE];
	printf("Enter String ");
	fflush(stdout);
	gets(string);
	int length=lengthofstr(string);
	printf("The length of string  %d",length);



	return 0;
}

int lengthofstr(char *str){

	int size=0;
	while (str[size]!='\0'){
		size++;
	}
	return size;
}
