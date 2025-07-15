/* 
 * Chapter 4: Exercise 1:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0, k=0;
  // a
  i=5; j=3;
  printf("%d %d\n", i/j, i%j);
  // b
  i=2; j=3;
  printf("%d\n", (i+10) % j);
  // c
  i=7; j=8; k=9;
  printf("%d\n", (i+10) % k/j);
  // d
  i=1;j=2;k=3;
  printf("%d\n", (i+5) % (j+2) / k);
  return 0;
}
