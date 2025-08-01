/*
 * Chapter 9: Program 2:
 * Write a program that asks the user to enter the amount of taxable income,
 * then displays the tax due.
 * There should be a function to calculate the tax due.
 *
 */

#include <stdio.h>

// Prototypes
float tax_due (float income);


float tax_due (float income) {
   
  float tax=0.0f;
  /* Compute tax */
  if (income < 751.0f) {
    tax = income * 0.01f;
  } else if (income < 2251.0f) {
    tax = 7.50f + income * 0.02f;
  } else if (income < 3751.0f) {
    tax = 37.50f + income * 0.03f;
  } else if (income < 5251.0f) {
    tax = 82.50f + income * 0.04f;
  } else if (income < 7001.0f) {
    tax = 142.50f + income * 0.05f;
  } else {
    /* Above 7001.0f */
    tax = 230.0f + income * 0.06f;
  }
  return tax;
}

int main (void) {

  float income=0.0f;

  /* Ask for user income */
  printf("Enter income: $");
  scanf("%f", &income);

  /* Compute tax */
  if (income > 0.0f) {
    printf("Tax due: $%.2f\n", tax_due(income));
  } else {
    printf("Incorrect income, it must be a positibe number)");
  }
  
  return 0;
}
