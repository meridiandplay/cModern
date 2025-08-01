/*
 * Chapter 9: Exercise 2:
 * Write a function check (x, y, n) that returns 1 if both x and y fall
 * between 0 and n-1 inclusive. The function should return 0 otherwise.
 * Assume that x, y, and n are all of type int
 *
 */

#include <stdio.h>
#include <stdbool.h>

bool check(int x, int y, int n);

bool check(int x, int y, int n) {
  return ( x>=0 && x<=(n-1) && y>=0 && y<=(n-1) );
}

int main (void) {
  int x=0, y=0, n=0;
  printf("Enter X Y N  numbers to test if X and Y fall between 0 and N-1: ");
  scanf("%d %d %d", &x, &y, &n);
  printf("%d\n", check(x, y, n));

  return 0;
}
