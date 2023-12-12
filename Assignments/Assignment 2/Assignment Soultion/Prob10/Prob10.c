/*
 * Prob10.c
 *
 *  Created on: Apr 8, 2023
 *      Author: Ahmed Diab
 */


#include <stdio.h>

int countholes(int x);


int main(void){

	int a,b;
	printf("Enter Number: ");
	fflush(stdout);
	scanf("%d",&a);
	b=countholes(a);
	printf("The total number of holes is: %d\n",b);






	return 0;
}

int countholes(int x){

	int rem,holes=0;


	while(x>0){
		rem=x%10;


		switch(rem){

		case 0:
		case 4:
		case 6:
		case 9:
			holes+=1;
			break;

		case 8:
			holes+=2;
			break;

		default:
			holes+=0;

		}

		x/=10;
	}

	return holes;
}
