/* 
 * Chapter 4: Exercise 10:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0;
  // a
  i=6;
  j = i += i;
  printf("%d %d\n", i, j);
  // b
  i=5;
  j = (i-=2) + 1;
  printf("%d %d\n", i, j);
  // c
  i=7;
  j = 6 + (i=2.5);
  printf("%d %d\n", i, j);
  // d
  i=2;j=8;
  j = (i=6) + (j=3);
  printf("%d %d\n", i, j);
  return 0;
}
