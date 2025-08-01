/*
 * Chapter 9: Problem 7:
 * Rewrite the power function to be more efficient using the fact
 * that even n powers can be written as (x^n/2)2 thus dimishing
 * the number of multiplications.
 *
 */

#include <stdio.h>

long power (int x, int n);

long power (int x, int n) {
  if (n == 0) {
    return 1;
  } else if ((n%2)==0) {
    long half = power(x, n/2);
    return half*half;
  } else {
    return x * power(x, n-1);
  }
}

int main(void) {

  long number=0, p=0;
  printf("Enter number x and power n: ");
  scanf("%ld %ld", &number, &p);

  printf("%ld^%ld = %ld\n", number, p, power(number, p));
  return 0;
}
