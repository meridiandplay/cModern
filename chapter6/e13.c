/*
 * Chapter 6: Exercise 13:
 * Rewrite the following loop so that it's body is empty.
 *
 */

#include <stdio.h>

int main (void) {

  int n=0, m=10;

  /* Original loop */
  for (n=0; m>0; n++) {
    m /= 2;
  }
  printf("%d %d\n", m, n);
  
  /* Rewritten loop */
  n=0, m=10;
  for (n=0; m>0; m/=2, n++) {
  }
  printf("%d %d\n", m, n);

  return 0;
}
