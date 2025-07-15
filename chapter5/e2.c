/* 
 * Chapter 5: Exercise 2:
 * Show the output produced by each command, assuming i, j, k are int variables.
 *
 */

#include <stdio.h>

int main (void) {

  int i=0,j=0,k=0;
  
  /* a) */
  i=10; j=5; k=0;
  printf("%d\n", !i < j);
  
  /* b) */
  i=2; j=1; k=0;
  printf("%d\n", !!i + !j);
  
  /* c) */
  i=5; j=0; k=-5;
  printf("%d\n", i && j || k);
 
  /* d) */
  i=1; j=2; k=3;
  printf("%d\n", i < j || k); 
  
  return 0;
}
