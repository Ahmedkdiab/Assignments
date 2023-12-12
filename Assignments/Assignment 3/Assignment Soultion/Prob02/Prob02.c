/*\
 Prob02.c
Author: Ahmed Diab
 ==================================================================================
Description : Check characters are distinct or repeated.
 =================================================================================
 */

#include <stdio.h>
#include <string.h>

#define SIZE 100


int checkdistinct(char *str);

int main(void){

	char string[SIZE];
	printf("Enter The Word: ");
	fflush(stdout);
	scanf("%s",string);

	if(checkdistinct(string)){

		printf("All characters in the word (%s) are distinct.\n",string);
	}

	else{
		printf("There are repeated characters in the string (%s).\n",string);


	}


	return 0;

}

int checkdistinct(char *str){

	int j,k,len;
	len=strlen(str);
	for(j=0;j<len;j++){

		for(k=j+1;k<len;k++){
			if(str[j]==str[k]){
				return 0;
			}
		}

	}

	return 1;
}


