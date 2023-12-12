/*
 * Prob09_2.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

int main(void){

	int a=0,b=1,c,n;
	printf("Enter the number of terms in the Fibonacci series:\n");
	fflush(stdout);
	scanf("%d",&n);
    printf("Fibonacci series:\n");

    while(n>0){
    	printf("%d\t",a);
    	c=a+b;
    	a=b;
    	b=c;
    	n--;
    }

	return 0;
}


