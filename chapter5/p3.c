/*
 * Chapter 5: Program 3:
 * Modify the broker.c program of Section 5.2 by making both of the following changes:
 * a) Ask user to enter the number of shares and the price per share.
 * b) Add statements that compute the comission charged by a rival broker. $33 plus 3 cents
 * per share if total shares < 2000 and $33 plus 2 cents if total shares > 2000. Display both
 * comissions by original broker and rival broker.
 *
 */

#include <stdio.h>

#define RIVAL_BASE_COMISSION 33.00f

int main (void) {

  int nshares=0;
  float ocomission=0.0f, rcomission=0.0f, value=0.0f, price=0.0f;

  /* Ask user for the number of share and the price per share */
  printf("Enter the number of shares: ");
  scanf("%d", &nshares);
  printf("Enter the price per share: ");
  scanf("%f", &price);

  /* Compute value of trade and show it */
  value = nshares * price;
  printf("Value of trade: $%.2f\n", value);

  /* Original broker comission calculus */
  if (value < 2500.00f)
    ocomission = 30.00f + 0.17f * value;
  else if (value < 6250.0f)
    ocomission = 56.00f + 0.0066f * value;
  else if (value < 20000.00f)
    ocomission = 76.00f + 0.0034f * value;
  else if (value < 50000.00f)
    ocomission = 100.00f + 0.0022f * value;
  else if (value < 500000.00f)
    ocomission = 155.00f + 0.0011f * value;
  else
    ocomission = 255.00f + 0.0009f * value;
  if (ocomission < 39.00f)
    ocomission = 39.00f;

  /* Rival broker comission calculus */
  if (nshares < 2000)
    rcomission = RIVAL_BASE_COMISSION * 0.03 * nshares;
  else
    /* 2000 shares or more case */
    rcomission = RIVAL_BASE_COMISSION * 0.02 * nshares;


  /* Show both comissions to the user */
  printf("Original broker's comission: $%.2f\n", ocomission);
  printf("Rival broker's comission: $%.2f\n", rcomission);

  return 0;
}
