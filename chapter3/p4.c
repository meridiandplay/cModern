/*
 * Chapter 3: Program 4:
 * Write a program that prompts the user to enter a telephone number in the form
 * (xxx) xxx-xxxx and then displays the number in the form xxx.xxx.xxxx
 */
#include <stdio.h>

int main (void) {

  // Declare and initialise variables.
  int prefix=0, identifier=0, number=0;

  // Ask the user to enter and register the information.
  printf("Enter phone number [(xxx) xxx-xxxx]: ");
  scanf("(%d) %d-%d", &prefix, &identifier, &number);
  
  // Show user the information.
  printf("You entered: %.3d-%.3d-%.4d\n", prefix, identifier, number);
  
  return 0;
}
