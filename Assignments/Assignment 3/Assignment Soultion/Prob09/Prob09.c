/*
 * Prob09.c
 *
 *  Created on: Apr 22, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

int fib(int n);

int main(void){

	int a,i,k;
	printf("Enter the number of terms in the Fibonacci series:\n");
	fflush(stdout);
	scanf("%d",&a);
    printf("Fibonacci series:\n");

    for(i=0;i<a;i++){
    	k=fib(i);
    	printf("%d\t",k);
    }





	return 0;
}

int fib(int n){

	if(n<=1){
		return n;
	}

	else{
		int x=fib(n-1);
		int y=fib(n-2);
		return x+y;

	}
}


