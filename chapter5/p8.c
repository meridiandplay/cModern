/*
 * Chapter 5: Program 8:
 * Write a program that asks user to enter a time (expressed in hours and minutes,
 * using the 24-hour clock format). The program then displays the departure and arrival times
 * for the flight whose departure time is closest to that entered by the user.
 *
 */

#include <stdio.h>



int main (void) {

  int hours=0, minutes=0, im=0;
  
  /* Ask user for the input */
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  /* Compute total minutes since midnight for the input */
  im = hours * 60 + minutes;

  /* Assign a nearest case for departue time and print dates */
  /* For this we need all departue times in minutes since midnight format */
  if (im < 8 * 60) {
    printf("Closest departure time is 08:00 a.m., arriving at 10:16 a.m.\n");
  } else if (im < ((9*60) + 43)) {
    printf("Closest departure time is 09:43 a.m., arriving at 11:52 a.m.\n");
  } else if (im < ((11*60) + 19)) {
    printf("Closest departure time is 11:19 a.m., arriving at 01:31 p.m.\n");
  } else if (im < ((12*60) + 47)) {
    printf("Closest departure time is 12:47 p.m., arriving at 03:00 p.m.\n");
  } else if (im < ((14*60) + 00)) {
    printf("Closest departure time is 02:00 p.m., arriving at 04:08 p.m.\n");
  } else if (im < ((15*60) + 45)) {
    printf("Closest departure time is 03:45 p.m., arriving at 05:55 p.m.\n");
  } else if (im < ((19*60) + 00)) {
    printf("Closest departure time is 07:00 p.m., arriving at 09:20 p.m.\n");
  } else if (im < ((21*60) + 45)) {
    printf("Closest departure time is 09:45 p.m., arriving at 11:58 p.m.\n");
  } else {
    printf("No flights left\n");
  }

  return 0;
}
