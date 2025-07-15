/*
 * Chapter 7: Program 15:
 * Write a program that computes the factorial of a positive integer
 *
 */

#include <stdio.h>

int main (void) {
  
  int i=0, j=0;
  long long l=1;

  /* Ask user for the input */
  printf("Enter a positive integer: ");
  scanf("%d", &i);

  /* Compute factorial */
  for (j=1; j<=i; j++){
  l = l * j;
  }

  /* Print user the answer for a short variable 7 as the input 
   * is the max number where the program behaves correctly for
   * short type in result, whereas 10 is the max for long long
   * variable */
  printf("Factorial of %d: %lld\n", i, l);

  return 0;
}
