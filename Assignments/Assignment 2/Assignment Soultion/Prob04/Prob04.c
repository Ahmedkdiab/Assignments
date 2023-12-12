/*\
 Prob04.c
Author: Ahmed Diab
 ====================================================================================
Description : Calculator using Function.
 ====================================================================================
 */

#include <stdio.h>

float add(float a,float b);
float sub(float a,float b);
float mul(float a,float b);
float div(float a,float b);

int main(void){

	char operator;
	float x,y,z;
	printf("Choose The operator (+, -, *, /): ");
	fflush(stdout);
	scanf("%c",&operator);
	printf("Enter First Number: ");
	fflush(stdout);
	scanf("%f",&x);
	printf("Enter second Number: ");
	fflush(stdout);
	scanf("%f",&y);

	switch(operator){
	case '+':
		z=add(x,y);
		printf("The Add %.2f and %.2f is %.2f",x,y,z);
		break;
	case '-':
		z=sub(x,y);
		printf("The sub %.2f and %.2f is %.2f",x,y,z);
		break;
	case '*':
		z=mul(x,y);
		printf("The mul %.2f and %.2f is %.2f",x,y,z);
		break;
	case '/':
		z=div(x,y);
		printf("The div %.2f and %.2f is %.2f",x,y,z);
		break;

	default:
		printf("Enter Right operator");

	}









	return 0;
}

float add(float a,float b){

	return a+b;
}

float sub(float a,float b){

	return a-b;

}
float mul(float a,float b){

	return a*b;
}

float div(float a,float b){

	return a/b;
}








