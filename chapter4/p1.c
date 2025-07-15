/* 
 * Chapter 4: Program 1:
 * Write a program that asks the user to enter a two-digit number, then prints the number
 * with its digits reversed.
 * 
 */

#include <stdio.h>

int main (void) { 

  // Declare and initialize
  int number=0, u=0, d=0;
  
  // Get the input
  printf("Enter a two-digit number: ");
  scanf("%d", &number);
  
  //Obtain digits
  d = number / 10;
  u = number % 10;

  // Show the solution
  printf("The reversal: %d%d\n", u, d);

  return 0;
}
