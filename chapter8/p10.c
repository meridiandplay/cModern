/*
 * Chapter 8: Program 10:
 * Write a program that asks user to enter a time (expressed in hours and minutes,
 * using the 24-hour clock format). The program then displays the departure and arrival times
 * for the flight whose departure time is closest to that entered by the user.
 * Use arrays for departure and arrival times and loop through them to get desired
 * result.
 *
 */

#include <stdio.h>

#define NFLIGHTS 8


int main (void) {

  int hours=0, minutes=0, im=0, i=0;
  int departures[NFLIGHTS] = {8*60, 9*60+43, 11*60+19, 12*60+47, 
	                     14*60, 15*60+45, 19*60, 21*60+45};
  int arrivals[NFLIGHTS]  = {10*60+16, 11+60+52, 13*60+31, 15*60, 
	                     16*60+6, 17*60+55, 21*60+20, 23*60+58};


  /* Ask user for the input */
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  /* Compute total minutes since midnight for the input */
  im = hours * 60 + minutes;
  
  /* Loop through departure array to get the one closest to input time */
  for (i=0; (i<NFLIGHTS) && (im>departures[i]); i++) {;}
  if (i==8) {
    printf("No flights left\n");
  } else {
    printf("Closes departure time is %02d:%02d, arriving at %02d:%02d\n",
           departures[i]/60, departures[i]%60, 
	   arrivals[i]/60, arrivals[i]%60);
  }

  return 0;
}
