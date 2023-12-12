/*
 * Prob13.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
#include <string.h>

#define SIZE 50

void removenonalphabet(char *str);

int main(void){

	char string[SIZE];
	printf("Enter String: ");
	fflush(stdout);
	gets(string);
	removenonalphabet(string);
	printf("\nString after remove Non Alphabet %s ",string);


	return 0;
}

void removenonalphabet(char *str){
	int i,j;
	for(i=0,j=0;str[i]!='\0';i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
			str[j]=str[i];
			j++;
		}
	}
	str[j]='\0';
}


