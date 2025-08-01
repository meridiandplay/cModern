/*
 * Chapter 9: Exercise 3:
 * Write a function gcd(m, n) that calculates the greatest
 * common divisor of the integers m and m
 *
 */

#include <stdio.h>

int gcd(int m, int n);

int gcd(int m, int n) {
  int r=0;
  while(n!=0) {
    r = m % n;
    m = n;
    n = r;
  }
  return m;
}

int main (void) {

  int m=0, n=0;
  printf("Enter 2 integers to calculate greatest common divisor: ");
  scanf("%d %d", &m, &n);
  printf("Greatest common divisor: %d\n", gcd(m, n));
  return 0;
}
