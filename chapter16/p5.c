/*
 * Chapter 16: Program 5:
 * Write a program that asks user to enter a time (expressed in hours and minutes,
 * using the 24-hour clock format). The program then displays the departure and arrival times
 * for the flight whose departure time is closest to that entered by the user.
 * Times should be stored in a single array. The elements of the arrays should be
 * structures containing departure and arrivel time integer members representing
 * the total minutes since midnight
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define MF 8


struct flights {
  int departure;
  int arrival;
};

const struct flights f[MF] = {{8*60, 10*60+16}, {9+60+43, 11*60+52}, 
	                     {11*60+19, 13*60+31}, {12*60+47, 15*60},
			     {14*60, 16*60+8}, {15*60+45, 17*60+55},
			     {19*60, 21*60+20}, {21*60+45, 23*60+58}};

int main (void) {
   
  int hours=0, minutes=0, im=0, i=0;
  bool found=false;
  /* Ask user for the input */
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  /* Compute total minutes since midnight for the input */
  im = hours * 60 + minutes;

  for (i=0; i<MF; i++) {
    if (f[i].departure > im) {
      found=true;    	    
      break;
    }
  }

  found ? 
  printf("Closest departure time is: %02d:%02d, arriving at %02d:%02d\n", 
		  (f[i].departure/60), (f[i].departure%60),
		  (f[i].arrival/60), (f[i].arrival%60)) : printf("No flights left\n");
  return 0;
}
