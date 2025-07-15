/* 
 * Chapter 6: Program 5:
 * Write a program that asks the user to enter a number, then prints the number
 * with its digits reversed.
 * 
 */

#include <stdio.h>

int main (void) { 

  /* Declare and initialize */
  int number=0, nd=0, r=0, d=0;
  
  /* Get the input */
  printf("Enter a number (max 10 digits): ");
  scanf("%d", &number);
  printf("The reversal: ");
  
  /* Get the number of digits */
  r = number;
  while (r!=0) {
    r = r / 10;
    nd++;
  }
  /* Loop the input and start printing from right to left */
  do {
    d = number % 10;
    printf("%d" ,d);
    number = number / 10;
    nd--;
  } while ( nd > 0 );
  
  /* End program printing a new line character */
  printf("\n");
  return 0;
}
