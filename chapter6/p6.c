/*
 * Chapter 6: Program 6:
 * Write a program that promps the user to enter a number n
 * then prints all even squares between 1 and n.
 */

#include <stdio.h>

int main (void) {
  
  int number=0, square=0, i=1;
  
  /* Ask user for input */
  printf("Enter a positive number: ");
  scanf("%d", &number);
  if (number < 0) {
    return 0;
  }

  /* Print even squares until we get a square higher than the number */
  while (square <= number) {
    if (i%2==0) {
      square = i*i;
      if (square <= number) {
        printf("%d\n", square);
      }
    }
    i++;
  }


  return 0;
}
