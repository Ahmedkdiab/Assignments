/*
 * Prob04.c
 *
 *  Created on: May 5, 2023
 *      Author: Ahmed Diab
 */

#include <stdio.h>

// Define structure for Time
struct Time{
	int hours;
	int minutes;
	int seconds;
}start,stop,difference,*startptr,*stopptr,*difptr;


// Declare functions
void stop_time(struct Time *stopptr);
void start_time(struct Time *startptr);
void differenceTime(struct Time *startptr, struct Time *stopptr, struct Time *difptr);


int main(void){

	// Set pointers to structure variables
	startptr=&start;
	stopptr=&stop;
	difptr=&difference;

	// Call functions to input start and stop times, and calculate the difference
	start_time(startptr);
	stop_time(stopptr);
	differenceTime(startptr, stopptr, difptr);

	return 0;
}

/* Function to input Start Time */
void start_time(struct Time *startptr){
	printf("Enter start time:\n");
	printf("Hours: ");
	fflush(stdout);
	scanf("%d",&startptr->hours);
	printf("Minutes: ");
	fflush(stdout);
	scanf("%d",&startptr->minutes);
	printf("Seconds: ");
	fflush(stdout);
	scanf("%d",&startptr->seconds);

/* Function to input Stop Time */
void stop_time(struct Time *stopptr){
	printf("Enter Stop Time:\n");
	printf("Hours: ");
	fflush(stdout);
	scanf("%d",&stopptr->hours);
	printf("Minutes: ");
	fflush(stdout);
	scanf("%d",&stopptr->minutes);
	printf("Seconds: ");
	fflush(stdout);
	scanf("%d",&stopptr->seconds);


/* Function to Calculate the Time Difference */
void differenceTime(struct Time *startptr, struct Time *stopptr, struct Time *difptr){

	// Declare variables for time difference in hours, minutes, and seconds
	int diff_hours=stopptr->hours-startptr->hours;
	int diff_min;
	int diff_seco;

	// Check if the minutes of the stop time is less than the minutes of the start time
	if((stopptr->minutes) < (startptr->minutes)){
		// Calculate the difference in minutes, and subtract 1 from the hours difference
		diff_min=(stopptr->minutes-startptr->minutes)+60;
		diff_hours-=1;
	}

	else{
		// Calculate the difference in minutes
		diff_min=stopptr->minutes-startptr->minutes;
	}

	// Check if the seconds of the stop time is less than the seconds of the start time
	if((stopptr->seconds) < (startptr->seconds)){
		// Calculate the difference in seconds, and subtract 1 from the minutes difference
		diff_seco=(stopptr->seconds-startptr->seconds)+60;
		diff_min-=1;
	}

	else{
		// Calculate the difference in seconds
		diff_seco=stopptr->seconds-startptr->seconds;
	}

	// Display the time difference
	printf("The DIFFERENCE between Two Time is\n%d hours %d minutes %d seconds",diff_hours,
			diff_min,diff_seco);
}
