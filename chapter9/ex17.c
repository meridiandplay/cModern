/*
 * Chapter 9: Exercise 17:
 * Rewrite the fact function so that it is no longer recursive
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
  int f=1;
  for (; n>=1; n--) {
    f *= n;
  }
  return f;
}
