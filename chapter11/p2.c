/*
 * Chapter 11: Program 2:
 * Write a program that asks user to enter a time (expressed in hours and minutes,
 * using the 24-hour clock format). The program then displays the departure and arrival times
 * for the flight whose departure time is closest to that entered by the user.
 * The program must include a function find_closest_flight that stores the departure and
 * arrival times in the variables pointed to by departure_time, arrival_time
 *
 */

#include <stdio.h>

#define DEPARTURE 0
#define ARRIVAL   1
#define SIZE      8

const int flights[SIZE][2] = {{480, 616}, {583, 712}, {679, 811}, {767, 900},
	                      {840, 968}, {945, 1075}, {1140, 1280}, {1305, 1438}};

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time);

int main (void) {

  int hours=0, minutes=0, im=0;
  int d=0, a=0;
  
  /* Ask user for the input */
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &hours, &minutes);

  /* Compute total minutes since midnight for the input */
  im = hours * 60 + minutes;
  
  /* Call problems function */
  find_closest_flight(im, &d, &a);

  /* Print flight's departure and arrival time */
  if (d==0 && a==0) {
    printf("No flights left.\n");
  } else {
    printf("Closest departure time is: %02d:%02d, arriving at %02d:%02d.\n", d/60, d%60, a/60, a%60);
  }

  return 0;
}

void find_closest_flight (int desired_time, int *departure_time, int *arrival_time) {
  int i=0;
  for (i=0; i<SIZE && desired_time>flights[i][DEPARTURE]; i++) {;}
  if (i==8) {
    *departure_time=0;
    *arrival_time=0;
  } else {
    *departure_time = flights[i][DEPARTURE];
    *arrival_time = flights[i][ARRIVAL];
  }
}
