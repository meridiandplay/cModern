/*
 * Chapter 6: Program 2:
 * Write a program that asks the user to enter two integers then calculates and displays
 * their greatest common divisor (GCD).
 */

#include <stdio.h>

int main (void) {

  int r=0, m=0, n=0;

  /* Ask the user for the input */
  printf("Enter two positive integers: ");
  scanf("%d %d", &m, &n);

  /* Calculate GCD using Euclid's algorithm */
  while (n!=0) {
    r = m % n;
    m = n;
    n = r;
  }
  printf("Greatest common divisor: %d\n", m);
  return 0;
}
