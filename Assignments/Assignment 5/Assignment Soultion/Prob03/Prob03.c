/*
 * Prob03.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

struct complex{
	float real;
	float imag;
}com1,com2,*ptr1,*ptr2;

void complex1(struct complex *ptr1);
void complex2(struct complex *ptr2);



int main(void){
	ptr1=&com1;
	ptr2=&com2;

	complex1(ptr1);
	complex2(ptr2);

	float sum_real=com1.real+com2.real;
	float sum_imag=com1.imag+com2.imag;

	printf("Sum= %.1f + %.1fi",sum_real,sum_imag);

	return 0;
}

void complex1(struct complex *ptr1){
	printf("Enter First Complex Number\n");
	printf("Real: ");
	fflush(stdout);
	scanf("%f",&ptr1->real);
	printf("Imaginary: ");
	fflush(stdout);
	scanf("%f",&ptr1->imag);
}

void complex2(struct complex *ptr2){
	printf("Enter First Complex Number\n");
	printf("Real: ");
	fflush(stdout);
	scanf("%f",&ptr2->real);
	printf("Imaginary: ");
	fflush(stdout);
	scanf("%f",&ptr2->imag);
}





