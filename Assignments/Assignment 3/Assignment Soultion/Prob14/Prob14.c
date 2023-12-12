/*
 * Prob14.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
#include <string.h>

#define SIZE 50

void reverse(char *str);

int main(void){

    char string[SIZE];
    printf("Enter string: ");
    fflush(stdout);
    gets(string);
    reverse(string);
    printf("%s",string);

    return 0;
}

void reverse(char *str){
    int i, j;
    int length = strlen(str);
    char temp;

    for(i = 0, j = length - 1; i < j; i++, j--){
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}
