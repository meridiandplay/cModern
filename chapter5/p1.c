/*
 * Chapter 5: Program 1:
 * Write a program that calculates how many digits a positive number contains, being "1" minimum number
 * of digits and "more than 3" the maximum case.
 *
 */

#include <stdio.h>

int main (void) {

  int i=0;
  
  /* Ask user for input number */
  printf("Enter a positive number: ");
  scanf("%d", &i);


  /* Evaluate the number of digits and output answer */
  printf("The number %d has ", i);
  if ((i>=0) && (i<=9))
    printf("1 digit\n");
  else if ((i>=10) && (i<=99))
    printf("2 digits\n");
  else if ((i>=100) && (i<=999))
    printf("3 digits\n");
  else
    printf("more than 3 digits\n");

  return 0;
}
