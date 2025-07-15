/* 
 * Chapter 4: Exercise 15:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int x=0, i=1, j=2;
  // a
  i += j;
  printf("%d %d\n", i, j);
  // b
  i=1; j=2;
  i--;
  printf("%d %d\n", i, j);
  // c
  i=1; j=2;
  x = i * j / i;
  printf("%d %d %d\n", x, i, j);
  // d
  i=1; j=2;
  x = i % ++j;
  printf("%d %d %d\n", x, i, j);
  return 0;
}
