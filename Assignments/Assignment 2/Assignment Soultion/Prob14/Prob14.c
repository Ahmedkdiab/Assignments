/*\
 Prob14.c
Author: Ahmed Diab
 ====================================================================================
Description : Function calculate the Fibonacci series using.
 ====================================================================================
 */

#include <stdio.h>

int fib(int x);


int main(void){

	int a,i;
	printf("Enter the number of terms in the Fibonacci series: ");
	fflush(stdout);
	scanf("%d",&a);

    printf("Fibonacci series:\n");

	for(i=0;i<a;i++){

		printf("%d",fib(i));
	}



	return 0;
}


int fib(int x){

	if (x<=1){
		return x;
	}

	else{

		int y=fib(x-1);
		int z=fib(x-2);
		return y+z;

	}

}
