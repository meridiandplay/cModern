/*
 * Chapter 9: Exercise 5:
 * Write a function num_digits(n) that returns the number 
 * of digits in n
 *
 */

#include <stdio.h>

int num_digits(int n);

int num_digits(int n) {
  int nd=0;
  while (n>0) {
    n /= 10;
    nd++;
  }
  return nd;
}

int main(void) {
  int number=0;
  printf("Enter an integer then number of digits will be displayed: ");
  scanf("%d", &number);
  printf("%d\n", num_digits(number));
  return 0;
}
