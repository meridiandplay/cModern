/*
 * Chapter 6: Program 4:
 * Add a loop to the broker.c program of Section 5.2 so that the user can enter more than
 * one trade and the program will calculate the commission on each. The program should terminate
 * when the user entres 0 as the trade value.
 */

#include <stdio.h>

int main (void) {

  float i=1.0f, c=0.0f;
  /* Main loop */
  while (i!=0.0f){
    /* Ask user for the input */
    printf("Enter value of trade (0 terminates program): ");
    scanf("%f",&i);
    /* Calculate comission */
    if (i < 2500.00f) {
      c = 30.00f + 0.017f * i;
    } else if (i < 6250.00f) {
      c = 56.00f + 0.0066f * i;
    } else if (i < 20000.00f) {
      c = 76.00f + 0.0034f * i;
    } else if (i < 50000.00f) {
      c = 100.00f + 0.0022f * i;
    } else if (i < 500000.00f) {
      c = 155.00f + 0.0011f * i;
    } else {
      c = 255.00f + 0.0009f * i;
    }
    if (c < 39.00f) {
      c = 39.00f;
    }
    printf("Comission: $%.2f\n", c);
  }
  printf("End of the program\n");
  return 0;
}
