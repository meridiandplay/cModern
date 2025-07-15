/*
  Chapter 3: Program 2:
  Write a program that formats product information entered by the user.
  A session with the program should look like the following:
  item number, unit price, purchase date, information is presented in
  tabulated table form.
*/
#include <stdio.h>

int main (void) {

  // Declare and initialize item number, unit price and purchase date.
  int inumber=0, pyear=0, pmonth=0, pday=0;
  float uprice=0.00f;

  // Ask user for all the product data.
  printf("Enter item number: ");
  scanf("%d", &inumber);
  printf("Enter unit price (max price: 9999.99): ");
  scanf("%f", &uprice);
  while (uprice > 9999.99f) {
    printf("Price can't be higher than $9999.99, enter price again: ");
    scanf("%f", &uprice);
  }
  printf("Enter purchase date (mm/dd/yyyy): ");
  scanf("%d/%d/%d", &pmonth, &pday, &pyear);

  // Present the user the tabulated table formatted data.
  printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n%d\t\t$%7.2f\t%.2d/%.2d/%d\n", inumber, uprice, pmonth, pday, pyear);

  return 0;
}
