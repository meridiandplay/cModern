/*
 * Chapter 6: Program 3:
 * Write a program that asks the user to enter a fraction, then reduces the fraction
 * to lowest terms.
 *
 */

#include <stdio.h>

int main (void) {
  
  int num=0, den=0, r=0, m=0, n=0;
  /* Ask user for the input */
  printf("Enter a fraction: ");
  scanf("%d/%d",&num,&den);
  m = num;
  n = den;

  /* Calculate GCD between numerator and denominator */
  while (n!=0){
    r = m % n;
    m = n;
    n = r;
  }

  /* Once found the GCD divide numerator and denominator by it and display it to the user*/
  printf("In lowest terms: %d/%d\n", num/m, den/m);
  
  return 0;
}
