/*
 * Chapter 17: Exercise 16:
 * Write the following function. The call sum (g, i, j) should return
 * g(i) + ... + g(j)
 * Here's the prototype for sum
 * int sum (int (*f) (int), int start, int end)
 *
 */

#include <stdio.h>

int g (int i);
int sum (int (*f)(int), int start, int end);

int main (void) {
  int s=0, e=0;
  printf("Enter two non consecutive positive integers: ");
  scanf("%d %d", &s, &e);
  printf("Result: %d\n", sum(g, s, e));
  return 0;
}

int g (int i) {
  return i;
}

int sum (int (*f) (int), int start, int end) {

  int suuu=0;
  for (;start<=end; start++) {
    suuu += (*f)(start);
  }
  return suuu;
}

