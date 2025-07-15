/* 
 * Chapter 5: Exercise 3:
 * Show the output produced by each command, assuming i, j, k are int variables.
 *
 */

#include <stdio.h>

int main (void) {

  int i=0,j=0,k=0;
  
  /* a) */
  i=3; j=4; k=5;
  printf("%d\n", i < j || ++j < k);
  printf("%d %d %d\n", i, j, k);
  
  /* b) */
  i=7; j=8; k=9;
  printf("%d\n", i - 7 && j++ < k);
  printf("%d %d %d\n", i, j, k);
  
  /* c) */
  i=7; j=8; k=9;
  printf("%d\n", (i = j) || (j = k));
  printf("%d %d %d\n", i, j, k);
 
  /* d) */
  i=1; j=1; k=1;
  printf("%d\n", ++i || ++j && ++k); 
  printf("%d %d %d\n", i, j, k);
  
  return 0;
}
