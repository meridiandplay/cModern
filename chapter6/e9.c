/*
 * Chapter 6: Exercise 9:
 * Translate the for statement of Exercise 8 into aan equivalent while statement.
 * It will need aone statement in addition to the while loop itself.
 *
 */
#include <stdio.h>

int main (void) {

  int i=10;
  while (i>=1) {
    printf("%d ", i++);
    i /= 2;
  }
  printf("\n");
  return 0;
}
