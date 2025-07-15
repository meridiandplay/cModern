/*
 * Chapter 5: Exercise 6:
 * Is the following if statement legal? if (n >= 1 <= 10)
 * if so what does it do when n is equal to 6?
 *
 */
#include <stdio.h>

int main (void) {

  int n=5;
  if (n == 1-10)
    printf("n is between 1 and 10\n");
  else
    printf("not\n");

  return 0;
}
