/*
 * Chapter 5: Exercise 10:
 * What output does the following program fragment produce?
 * Assume that i is an integer variable
 *
 */

#include <stdio.h>

int main (void) {
  
  int i=1;
  switch (i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
  }
  printf("\n");

  return 0;
}
