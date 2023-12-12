/*\
 Prob07.c
Author: Ahmed Diab
 ====================================================================================
Description : Function to check  the number is an even  or an odd
 ====================================================================================
 */

#include <stdio.h>

int check_multiple(int x,int y);


int main(void){

	int a=5,b=7,z;

	z=check_multiple(a,b);

	if(z==0){

		printf("%d is multiple of %d",b,a);

	}

	else{

		printf("%d is not multiple of %d",b,a);


	}

	return 0;

}


int check_multiple(int x,int y){

	if(y%x==0){
		return 0;
	}

	else{
		return 1;
	}


}
