/* 
 * Chapter 4: Exercise 14:
 * Anticipate and show the output of the following 
 * printf calls
 * 
 */

#include <stdio.h>

int main (void) { 

  int x=0, a=1, b=2, c=3, d=4, e=5;
  // a
  x = a * b - c * d + e;
  printf("%d\n", x);
  // b
  x = a / b % c / d;
  printf("%d\n", x);
  // c
  x = - a - b + c - + d;
  printf("%d\n", x);
  // d
  x = a * - b / c - d;
  printf("%d\n", x);
  return 0;
}
