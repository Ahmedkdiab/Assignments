/*
 * Prob10.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

#define SIZE 50

void uppertolower(char str[],int size);

int main(void){

	char string[SIZE];
	printf("Enter Uppercase String: ");
	fflush(stdout);
	scanf("%s",string);
	uppertolower(string, SIZE);
	printf("Lowercase string (%s) ",string);


	return 0;
}


void uppertolower(char *str,int size){
	int i;

	for(i=0;i<size;i++){

		if(str[i]>='A' && str[i]<='Z'){
			str[i]+=32;
		}
	}


}


