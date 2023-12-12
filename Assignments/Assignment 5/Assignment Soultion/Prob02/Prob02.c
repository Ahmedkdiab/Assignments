/*
 * Prob02.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

struct distances{
	int inch;
	int feet;
}d1,d2,*s_ptr,*sptr;

void distances1(struct distances *s_ptr);
void distances2(struct distances *s_ptr);



int main(void){

	s_ptr=&d1;
	sptr=&d2;

	distances1(s_ptr);
	distances2(sptr);

	int sum_feet=d1.feet+d2.feet;
	int sum_inches=d1.inch+d2.inch;
	printf("Sum of Feet is %d\nsum of Inches is %d",sum_feet,sum_inches);




	return 0;
}

void distances1(struct distances *s_ptr){
	printf("Enter the first distance in feet and inches:\n");
	printf("Feet:");
	fflush(stdout);
	scanf("%d",&s_ptr->feet);
	printf("Inches:");
	fflush(stdout);
	scanf("%d",&s_ptr->inch);


}

void distances2(struct distances *sptr){
	printf("Enter the second distance in feet and inches:\n");
	printf("Feet:");
	fflush(stdout);
	scanf("%d",&sptr->feet);
	printf("Inches:");
	fflush(stdout);
	scanf("%d",&sptr->inch);

}





