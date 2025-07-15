/* 
 * Chapter 4: Exercise 12:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0;
  // a
  i=5;
  j = ++i * 3 - 2; 
  printf("%d %d\n", i, j);
  // b
  i=5;
  j = 3 - 2 * i++;
  printf("%d %d\n", i, j);
  // c
  i=7;
  j = 3 * i-- + 2;
  printf("%d %d\n", i, j);
  // d
  i=7;
  j = 3 + --i * 2;
  printf("%d %d\n", i, j);
  return 0;
}
