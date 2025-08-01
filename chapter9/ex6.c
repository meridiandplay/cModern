/*
 * Chapter 9: Exercise 6:
 * Write a function digit (n, k) that returns the kth digit
 * from the right in n (a positive integer)
 *
 */

#include <stdio.h>


int digit (int n, int k);

int digit (int n, int k) {
  int i=0;
  for (i=1; i<k; i++) {
    n /= 10;
  }
  return n % 10;
}


int main (void) {
  
  int number=0, pos=0;
  printf("Write a positive number and the digit you want to return (n, k): ");
  scanf("%d %d", &number, &pos);

  /* Print solution */
  printf("Digit: %d\n", digit(number, pos));

  
  return 0;
}
