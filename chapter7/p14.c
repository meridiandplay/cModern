/*
 * Chapter 7: Program 14:
 * Write a program that uses Newton's method to compute
 * the square root of a positive floating point number.
 *
 */

#include <math.h>
#include <stdio.h>

int main (void) {
  
  /* Give initial values a number to start guessing in Newton's
   * method */
  double new=0.0f, abs=0.0f, diff=0.0f, y=1.0f, x=0.0f, r=0.0f;
  
  /* Ask user for the input */
  printf("Enter a positive number: ");
  scanf("%lf", &x);
  
  /* Compute square root using Newton's method */
  do {
    new = (y+(x/y)) / 2;
    diff = y - new;
    abs = fabs(diff);
    y = new;
  } while (abs >= 0.0001);
  /* Result is found in the old or new variables */
  r = y;

  /* Print final result */
  printf("Square root: %lf\n", r);
  return 0;
}
