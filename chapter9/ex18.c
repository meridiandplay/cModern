/*
 * Chapter 9: Exercise 18:
 * Write a recursive version of the gcd function.
 *
 */

#include <stdio.h>

int gcd (int m, int n);

int main (void) {
  int m=0, n=0;
  printf("Enter two numbers to calculate greatest common divisor: ");
  scanf("%d %d", &m, &n);
  printf("The greatest common divisor of %d and %d is: %d\n", m, n, gcd(m, n));
  return 0;
}

int gcd (int m, int n) {
  return n==0 ? m : gcd(n, m%n);
}
