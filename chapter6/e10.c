/*
 * Chapter 6: Exercise 10:
 * Show how to replace a continue statement by an equivalent goto statement.
 *
 */

#include <stdio.h>

int main (void) {

  int i=10;
  while (i>=0) {
  if (i%2 == 0) {
    i--;
    continue;
  }
  printf("%d ", i--);
  }
  printf("\n");
  i=10;
  while (i>=0) {
  if (i%2 == 0) {
    i--;
    goto loop_end;
  }
  printf("%d ", i--);
  loop_end : ;
  }
  printf("\n");
  
  return 0;
}
