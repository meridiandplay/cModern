/*
 * Chapter 7: Program 9:
 * Write a program that asks user to enter a time (expressed in hours 
 * and minutes, using the 12-hour clock format). The program then 
 * displays the time in 24-hour clock format.
 *
 */

#include <stdio.h>



int main (void) {

  int hours=0, minutes=0;
  char c1=' ', c2=' ';
  
  /* Ask user for the input */
  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c%c", &hours, &minutes, &c1, &c2);

  /* Compute the 24 hour clock format */
  if ((c1 == 'a') || (c1 == 'A')) {;
  } else if ((c1 == 'p') || (c1 == 'P')) {
      hours = hours + 12;
  } else {
      printf("Invalid format\n");
      return 0;
  }
  
  /* Print to the user the clock in 24-hour format */
  printf("24-hour format: %.2d:%.2d\n", hours, minutes);

  return 0;
}
