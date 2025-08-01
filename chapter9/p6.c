/*
 * Chapter 9: Program 6:
 * Write a function that computes the value of a polynomial
 *
 */

#include <stdio.h>

/* Protoypes */
long power (int x, int n);
long poly (int a, int b, int c, int d, int e, int f, int x);

/* Function definitions */
long power (int x, int n) {
  return n==0 ? 1 : x * power (x, n-1);
}

long poly (int a, int b, int c, int d, int e, int f, int x) {
  return (a*power(x, 5)) + (b*power(x, 4)) + (c*power(x, 3)) + (d*power(x,2)) + (e*x) + f;
}

int main (void) {
 long x=0, result=0;
 printf("Enter number x to calculate value of polynomial: "
		 "3x⁵+2x⁴-5x*3-x²+7x-6: ");
 scanf("%ld", &x);
 /* Call poly function to calculate result */
 result = poly(3, 2, -5, -1, 7, -6, x);
 /* Print result */
 printf("Result: %ld\n", result);
 return 0;
}
