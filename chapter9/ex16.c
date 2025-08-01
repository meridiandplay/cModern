/*
 * Chapter 9: Exercise 16:
 * Condense the fact function in the same way we condensed power
 *
 */

#include <stdio.h>

int fact (int n);

int main (void) {
  int n=0;
  printf("Enter a number to calculate factorial: ");
  scanf("%d", &n);
  printf("Factorial of %d is: %d\n", n, fact(n));
  return 0;
}

int fact (int n) {
  return n<=1 ? 1 : n * fact(n-1);
}
