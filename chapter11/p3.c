/*
 * Chapter 6: Program 3:
 * Write a program that asks the user to enter a fraction, then reduces the fraction
 * to lowest terms.
 * The program must include the following function reduce that should deposit
 * the reduced numerator and denominator into the pointer variables that has
 * as arguments
 *
 */

#include <stdio.h>


void reduce (int n, int d, int *rn, int *rd);

int main (void) {
  
  int numerator=0, denominator=0, reducedn=0, reducedd=0;
  /* Ask user for the input */
  printf("Enter a fraction: ");
  scanf("%d/%d",&numerator, &denominator);
  
  /* Call reduce function */
  reduce(numerator, denominator, &reducedn, &reducedd);

  /* Once found the GCD divide numerator and denominator by it and display it to the user*/
  printf("In lowest terms: %d/%d\n", reducedn, reducedd);
  
  return 0;
}

void reduce (int num, int den, int *rn, int *rd) {
  int m=0, n=0, r=0;
  m = num;
  n = den;
  while (n!=0) {
    r = m % n;
    m = n;
    n = r;
  }
  *rn = num/m;
  *rd = den/m;
}
