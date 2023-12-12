/*\
 Prob06.c
Author: Ahmed Diab
 ====================================================================================
Description : Function converts the any letter from lowercase to uppercase.
 ====================================================================================
 */

#include <stdio.h>

char LowerToUpper(char x);


int main(void){

	char a;
	printf("Enter lowercase letter: ");
	fflush(stdout);
	scanf("%c",&a);
	a=LowerToUpper(a);
	printf("The Upper case is %c",a);



	return 0;
}



char LowerToUpper(char x){

	if(x>='a' && x<='z'){
		x-=32;
		return x;

	}

}



