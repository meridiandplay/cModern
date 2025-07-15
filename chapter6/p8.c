/*
 * Chapter 6: Program 8:
 * Write a program that prints a one-month calendar. 
 * The user specifies the number of days in the month and 
 * the day of the week on which the month begins.
 */

#include <stdio.h>

int main (void) {
  
  int days=0, start=0, n=0, i=0;

  /* Ask user for the input */
  printf("Enter number of days in month: ");
  scanf("%d", &days);
  printf("Enter starting day of the week (1=Sun, 7=Sat): ");
  scanf("%d", &start);
  if ((start < 1) || (days < 1)) {
    return 0;
  }

  /* Print first characters of the calendar depending on start day */
  while(n<start-1){
   printf("   ");
   n++;
  }

  /* Loop to create the calendar */
  for (n=start, i=1; i<=days; i++) {
    if (n%7==0) {
      printf("%2d\n", i);
      n=1;
    } else {
      printf("%2d ", i);
      n++;
    }
  }

  /* Print new line character to finish the format of the calendar */
  printf("\n");

  return 0;
}
