/* 
 * Chapter 5: Exercise 1:
 * Show the output produced by each command, assuming i, j, k are int variables.
 *
 */

#include <stdio.h>

int main (void) {

  int i=0,j=0,k=0;
  
  /* a) */
  i=2; j=3; k=0;
  k = i * j == 6;
  printf("%d\n", k);
  
  /* b) */
  i=5; j=10; k=1;
  printf("%d\n", k > i < j);
  
  /* c) */
  i=3; j=2; k=1;
  printf("%d\n", i < j == j < k);
 
  /* d) */
  i=3; j=4; k=5;
  printf("%d\n", i % j + i < k); 
  
  return 0;
}
