/*
 * Prob09.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
#include <string.h>
#define SIZE 10
void separat(char *str1,char *str2);


int main(void){

	char s1[10]="Ahmed";
	char s2[4];
	separat(s1, s2);



	return 0;
}

void separat(char *str1,char *str2){

	char *ptr1=str1;


	while(*ptr1!='\0'){
		ptr1++;
	}
	str2[0]=*(--ptr1);
	str2[1]=' ';
	str2[2]=*(--ptr1);
	str2[3]='\0';

	printf("%s",str2);

}

