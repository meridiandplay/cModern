/*
 * Chapter 6: Program 1:
 * Write a program that finds the largest in a series of numbers entered by the user.
 * The program must prompt the ser to enter numbers one by one. When the user enters
 * 0 or a negative number the program must display the laragest nonnegative number entered.
 *
 */

#include <stdio.h>

int main (void) {

  float n=1.0, largest=0.0f;

  while(n>0.0f) {
  /* Ask user for input */
    printf("Enter a number (0 and negative end the program): ");
    scanf("%f",&n);
    if (n>=largest) {
    largest = n;
    }
  }
  printf("The largest number entered was %.2f\n", largest);
  return 0;
}
