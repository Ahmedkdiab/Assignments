/*
 * Prob07.c
 *
 *  Created on: May 4, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
void Swap_Bitwise(int *x,int *y);


int main(void){

	int a=10;
	int b=15;
	void(*ptr_fun)(int*,int*);   // pointer to function definition
	printf("Before swap: a = %d, b = %d\n", a, b);

	ptr_fun=Swap_Bitwise;    // // pointer to function initializaion


	(*ptr_fun)(&a,&b);  /// pointer to function calling


	printf("After swap: a = %d, b = %d\n", a, b);


	return 0;
}

void Swap_Bitwise(int *x,int *y){
	*x=*x^*y;
	*y=*y^*x;
	*x=*x^*y;
}

