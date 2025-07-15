/* 5% Tax calculator */
#include <stdio.h>

#define TAX (1.05f)

int main (void) {

  float price = 0.00f;

  printf("5%% Tax calculator v1.0\n");
  printf("Enter the price (in dollars): $");
  scanf("%f",&price);
  printf("Including tax the total amounts to: $%.2f\n", TAX*price);

  return 0;
}
