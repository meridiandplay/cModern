/* 
 * Chapter 4: Program 3:
 * Write the program that ask the user to enter a three-digit number and get digits without arithmetic,
 * then print the number with its digits reversed
 * 
 */

#include <stdio.h>

int main (void) { 

  // Declare and initialize
  int u=0, d=0, c=0;
  
  // Get the input
  printf("Enter a three-digit number: ");
  scanf("%1d%1d%1d", &c, &d, &u);

  // Show the solution
  printf("The reversal: %d%d%d\n", u, d, c);

  return 0;
}
