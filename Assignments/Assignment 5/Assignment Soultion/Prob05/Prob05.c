/*
 * Prob05.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>
#define SIZE 10

struct student{
	char *name;
	int id;
	int grade;
}Stud[SIZE],*ptr;



void students(struct student *ptr);
void print_info(struct student *ptr, int size);



int main(void){

	ptr=Stud;

	// Initialize students' data
	students(ptr);

	// Print out students' data
	print_info(ptr, SIZE);



	return 0;
}


// Function to initialize students' data

void students(struct student *ptr){

	// Initialize the first student's data
	ptr->name="Ahmed Khaled";
	ptr->id=120;
	ptr->grade=70;

	ptr++;

	// Initialize the second student's data
	ptr->name="Mohamed Khaled";
	ptr->id=Stud[0].id+1;
	ptr->grade=80;

	ptr++;

	// Initialize the third student's data
	ptr->name="Reem Ahmed";
	ptr->id=Stud[0].id+2;
	ptr->grade=60;

	ptr++;

	// Initialize the forth student's data
	ptr->name="Omar Ashraf";
	ptr->id=Stud[0].id+3;
	ptr->grade=63;

	ptr++;

	// Initialize the fifth student's data
	ptr->name="Abdallah Mohamed";
	ptr->id=Stud[0].id+4;
	ptr->grade=95;

	ptr++;

	// Initialize the sixth student's data
	ptr->name="Ahmed Mater";
	ptr->id=Stud[0].id+5;
	ptr->grade=68;

	ptr++;

	// Initialize the seventh student's data
	ptr->name="Ahmed Mohamed";
	ptr->id=Stud[0].id+6;
	ptr->grade=72;

	ptr++;

	// Initialize the eighth student's data
	ptr->name="Omar Ahmed";
	ptr->id=Stud[0].id+7;
	ptr->grade=73;

	ptr++;

	// Initialize the ninth student's data
	ptr->name="Yomna Khaled";
	ptr->id=Stud[0].id+8;
	ptr->grade=79;

	ptr++;

	// Initialize the tenth student's data
	ptr->name="Khaled Diab";
	ptr->id=Stud[0].id+9;
	ptr->grade=98;
}

// Function to print out students' data

void print_info(struct student *ptr, int size){

	int i;

	for(i=0;i<size;i++){
		printf("Student Number %d Information : \n",i+1);
		printf("Name : %s \n",ptr->name);
		printf("Id : %d \n",ptr->id);
		printf("Grade : %d \n",ptr->grade);
		ptr++;
	}
}




