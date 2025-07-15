/*
 * Chapter 6: Program 11:
 * Write a program that approximates e by computing the value of e to the
 * Nth iteration being N an integer entered by the user
 *
 */

#include <stdio.h>

int main(void) {
  
  int i=0, n=0, x=0;
  float e=0.00f, den=1.00f;
  
  /* Ask user for the input */
  printf("Enter a positive integer to which approximate e number: ");
  scanf("%d",&n);

  /* Approximate e by the Nth time */
  while (i<=n) {
    /*  Calculate factorial */
    for (den=1.00f, x=i; x>1; x--) { 
      den = den * x;
    }
    //printf("factorial: %f\n", den);
    /* Add fraction to e number */
    e = e + (1/den);
    i++;
  }

  /* Print the approximate e number */
  printf("e number: %.9f\n", e);
  return 0;
}
