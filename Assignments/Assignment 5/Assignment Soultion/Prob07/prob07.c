/*
 * PRob07.c
 *
 *  Created on: May 6, 2023
 *      Author: Ahmed Diab
 */


#include <stdio.h>

enum fan_level{
	Level1=1,Level2,Level3
};

int main(void){

	enum fan_level fan=Level1;

	printf("Level(1) Fan: %d\n",fan);

	if(fan==Level1){

		fan=Level2;

		printf("Level(2) Fan: %d\n",fan);

	}

	if(fan==Level2){

		fan=Level3;

		printf("Level(3) Fan: %d\n",fan);

	}

	return 0;
}
