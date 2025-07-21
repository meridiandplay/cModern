/*
 * Chapter 8: Exercise 5:
 * Write a program that declares an array named fibonacci to be
 * 40 elements and initialize it with the first 40 Fibonacci numbers.
 *
 */

#include <stdio.h>

#define FSIZE 40

int main (void) {

  int i=0;
  int fibonacci[FSIZE] = {[0]=0, [1]=1};
  
  /* Fill array with Fibonacci sequence */
  for (i=2; i<FSIZE; i++) {
    fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
  }

  /* Output first 40 numbers of Fibonacci sequence */
  printf("First 40 numbers of fibonacci sequence: ");
  for(i=0; i<FSIZE; i++) {
    printf("%d ", fibonacci[i]);
  }
  printf("\n");

  return 0;
}
