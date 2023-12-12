/*
 * Prob01.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Diab
 */
#include <stdio.h>

struct student{
	char *first_name;
	char *second_name;
	float mark;

}s1,*s_ptr;


int main(void){
	s_ptr=&s1;

	s_ptr->first_name="Ahmed";
	s_ptr->second_name="Khaled";
	s_ptr->mark=90.5;

	printf("Student 1 Information:\n");
	printf("Name: %s %s\n",s_ptr->first_name,s_ptr->second_name);
	printf("Marks: %.1f",s_ptr->mark);


	return 0;
}

