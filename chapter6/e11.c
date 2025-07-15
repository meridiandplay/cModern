/*
 * Chapter 6: Exercise 11:
 * What output does the following program fragment produce
 *
 */
#include <stdio.h>

int main (void) {

  int i=0, sum=0;
  for (i=0; i<10; i++) {
    if (i%2)
      continue;
    sum += i;
  }
  printf("%d\n", sum);
  return 0;
}
