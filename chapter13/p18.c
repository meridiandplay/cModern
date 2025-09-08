/*
 * Chapter 13: Program 18:
 * Write a program that accepts a date from the user in the form
 * mm/dd/yyyy and then displays it in the for month dd, yyyy where
 * month is the name of the month
 *
 */

#include <stdio.h>

#define SIZE 80

int main (void) {
  
  int month=0, day=0, year=0;
  char *months[] = {"January", "February", "March", "April",
	            "May", "June", "July", "August", "September",
		    "October", "November", "December"};
  /* Ask user for input */
  printf("Enter a date: ");
  scanf("%2d/%2d/%4d", &month, &day, &year);
  printf("You entered the date %s %2d, %4d\n", months[month-1], day, year);

  return 0;
}
