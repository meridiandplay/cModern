/* 
 * Chapter 4: Exercise 3:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0;
  /* a */
  i=8; j=5;
  printf("%d\n", i/j);
  /* b */
  i=-8; j=5;
  printf("%d\n", i/j);
  /* c */
  i=8; j=-5;
  printf("%d\n", i/j);
  /* d */
  i=-8;j=-5;
  printf("%d\n", i/j);
  return 0;
}
