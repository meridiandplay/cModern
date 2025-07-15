/* 
 * Chapter 4: Exercise 11:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int i=0, j=0, k=0;
  // a
  i=1;
  printf("%d ", i++ - 1);
  printf("%d\n", i);
  // b
  i=10; j=5;
  printf("%d ", i++ - ++j);
  printf("%d %d\n", i, j);
  // c
  i=7; j=8;
  printf("%d ", i++ - --j);
  printf("%d %d\n", i, j);
  // d
  i=3;j=4;k=5;
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d\n", i, j, k);
  return 0;
}
