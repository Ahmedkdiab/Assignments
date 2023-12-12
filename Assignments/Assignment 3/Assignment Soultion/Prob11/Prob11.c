/*
 * Prob11.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */
#include <stdio.h>
#include <string.h>

#define SIZE 50

int frequency(char *str,char ch);

int main(void){

	char string[SIZE];
	char ch;
	printf("Enter string: ");
	fflush(stdout);
	gets(string);
	printf("Enter character ");
	fflush(stdout);
	scanf(" %c",&ch);
	int freq=frequency(string,ch);

	printf("The frequency of '%c' is %d",ch,freq);





	return 0;
}

int frequency(char *str,char ch){
	int i,x=0;

	for(i=0;str[i]!='\0';i++){

		if(ch==str[i]){
			x++;
		}
	}
	return x;
}

