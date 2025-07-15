/*
 * Chapter 6: Exercise 8:
 * What output does the following program fragment produce
 *
 */
#include <stdio.h>

int main (void) {

  int i=0;
  for (i=10; i>=1; i/=2) {
    printf("%d ", i++);
  }
  printf("\n");
  return 0;
}
