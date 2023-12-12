/*
 * Prob15.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
#include <string.h>

#define SIZE 100

void conca(char *str1,char *str2);

int main(void){

	char str1[SIZE];
	char str2[SIZE];
	printf("Enter First String: ");
	fflush(stdout);
	gets(str1);
	printf("Enter Second string: ");
	fflush(stdout);
	gets(str2);
	conca(str1, str2);


	return 0;
}

void conca(char *str1,char *str2){

	printf("%s %s",str1,str2);


}
