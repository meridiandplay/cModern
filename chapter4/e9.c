/* 
 * Chapter 4: Exercise 9:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0, k=0;
  // a
  i=7; j=8;
  i*=j+1;
  printf("%d %d\n", i, j);
  // b
  i=j=k=1;
  i += j += k;
  printf("%d %d %d\n", i, j, k);
  // c
  i=1; j=2; k=3;
  i -= j -= k;
  printf("%d %d %d\n", i, j, k);
  // d
  i=2;j=1;k=0;
  i *= j *= k;
  printf("%d %d %d\n", i, j, k);
  return 0;
}
