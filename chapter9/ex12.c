/*
 * Chapter 9: Exercise 12:
 * Write a function that given 2 arrays of integers calculates
 * the inner product
 *
 */

#include <stdio.h>

#define LEN 10

double inner_product (double a[], double b[], int n);

int main (void) {
  int i=0;
  double l1[LEN]={0}, l2[LEN]={0};
  printf("write 2 list of 10 numbers:\n");
  for (i=0; i<LEN; i++) {
    scanf(" %lf", &l1[i]);
  }
  for (i=0; i<LEN; i++) {
    scanf(" %lf", &l2[i]);
  }
  printf("The inner product is: %lf\n", inner_product(l1, l2, LEN));
  return 0;
}

double inner_product (double a[], double b[], int n) {
  int i=0;
  double ip=0.0;
  for(i=0; i<n; i++) {
    ip += a[i] * b[i];
  }
  return ip;
}
