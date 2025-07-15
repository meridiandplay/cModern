/* 
 * Chapter 4: Program 2:
 * Write a program that asks the user to enter a three-digit number, then prints the number
 * with its digits reversed.
 * 
 */

#include <stdio.h>

int main (void) { 

  // Declare and initialize
  int number=0, u=0, d=0, c=0;
  
  // Get the input
  printf("Enter a three-digit number: ");
  scanf("%d", &number);
  
  //Obtain digits
  c = number / 100;
  d = (number - (c*100)) / 10;
  u = (number - (c*100)) % 10;

  // Show the solution
  printf("The reversal: %d%d%d\n", u, d, c);

  return 0;
}
