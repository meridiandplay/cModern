/*
 * Chapter 5: Program 4:
 * Write a program that asks the user to enter a wind speed (in knots), then
 * displays the corresponding description.
 *
 */

#include <stdio.h>

int main (void) {

  int speed=0;

  /* Ask user input */
  printf("Enter wind's speed in knots: ");
  scanf("%d", &speed);

  /* Compute Beaufort scale */
  if (speed >= 0)
    if (speed < 1)
      printf("Calm\n");
    else if (speed < 4)
      printf("Light air\n");
    else if (speed < 28)
      printf("Breeze\n");
    else if (speed < 48)
      printf("Gale\n");
    else if (speed < 64)
      printf("Storm\n");
    else
      printf("Hurricane\n");
  else
    printf("Incorrect speed, it must be a positive number.\n");

  return 0;
}
