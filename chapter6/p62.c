/*
 * Chapter 6: Program 6:
 * Write a program that promps the user to enter a number n
 * then prints all even squares between 1 and n.
 */

#include <stdio.h>

int main (void) {
  
  int i=0, n=0;
  
  /* Ask user for input */
  printf("Enter a positive number: ");
  scanf("%d", &n);
  if (n < 0) {
    return 0;
  }

  /* Print even squares until we get a square higher than the number */
  for (i=2; i*i<=n; i+=2){
    printf("%d\n", i*i);
  }

  return 0;
}
