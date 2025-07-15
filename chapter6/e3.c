/*
 * Chapter 6: Exercise 3:
 * What output does the following program fragment produce
 *
 */
#include <stdio.h>

int main (void) {

  int i=0, j=0;
  for (i=5, j=i-1; i>0, j>0; --i, j=i-1) {
    printf("%d ", i);
  }  
  printf("\n");
  return 0;
}
