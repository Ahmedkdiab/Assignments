/*
 * Prob02.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

int countlength(char *str);


int main(void){

	char string[]="Ahmed Khaled";
	int size=countlength(string);
	printf("The length of String is %d ",size);




	return 0;
}

int countlength(char *str){
	char *ptr=str;
	int count=0;

	while(*ptr!='\0'){
		ptr++;
		count++;
	}


	return count;
}
