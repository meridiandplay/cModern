/*
 * Chapter 7: Program 3:
 * Modify the sum2.c program of Section 7.1 to sum a series of double values.
 * sum2.c: Sums a series of numbers
 *
 */

#include <stdio.h>

int main(void) {
  double n=0.0, sum=0.0;
  printf("This program sums a series of integers.\n");
  printf("Enter integers (0 to terminate): ");
  scanf("%lf", &n);
  while (n!=0) {
    sum += n;
    scanf("%lf", &n);
  }
  printf("The sum is %lf\n", sum);
  return 0;
}


