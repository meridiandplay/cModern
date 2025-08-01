/*
 * Chapter 9: Exercise 19:
 * Mistery function explainning recursivity
 *
 */

#include <stdio.h>

void pb(int n) {
  if (n!=0) {
    pb(n/2);
    putchar('0'+n%2);
  }
}

int main (void) {

  int number=0;
  printf("Write a number: ");
  scanf("%d", &number);
  pb(number);
  printf("\n");

  return 0;
}
