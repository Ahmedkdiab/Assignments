/*\
 Prob01.c
Author: Ahmed Diab
 ==================================================================================
Description : Function that prints the cube of any number.
 =================================================================================
 */

#include <stdio.h>

int cube(int x); // Function Prototype


int main(void){

	int a,b;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&a);
	b=cube(a);
	printf("The Cube of %d is %d ",a,b);

	return 0;
}

/*************** Functions Definitions ***************/

int cube(int x){

	return x*x*x;
}




