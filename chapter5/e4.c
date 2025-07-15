/*
 * Chapter 5: Exercise 4:
 * Write a single expression whose value is either -1, 0 or +1
 * depending on whether i is less than, equal to, or greater than
 * j, respectively.
 */

#include <stdio.h>

int main (void) {

  int i=0, j=0;

  /* a) i is less than j, therefire result is -1 */
  i=1; j=2;
  printf("%d\n", (i > j) - (i < j));

  /* b) i is equal than j, therefore result is 0 */
  i=2; j=2;
  printf("%d\n", (i > j) - (i < j));

  /* c) i is greater than j, therefore result is +1 */
  i=2; j=1;
  printf("%d\n", (i > j) - (i < j));

  return 0;
}
