/*
 * Chapter 6: Exercise 14:
 * Find the error in the following program fragment and fix it.
 *
 */

#include <stdio.h>

int main (void) {

  int n=0;

  /* Ask the user for input */
  printf("Enter number to check if even or odd: ");
  scanf("%d", &n);

  /* Check if even or odd */
  if (n%2==0) {
    printf("%d is even\n", n);
  } else {
    printf("%d is odd\n", n);
  }
  return 0;
}
