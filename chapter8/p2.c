/*
 * Chapter 8: Program 2:
 * Modify repdigit.c so that it shows a table showing how many times
 * each digit appears in the number.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define ND 10

int main (void) {

  int ds[ND]={0};
  int d=0, i=0;
  long n=0;

  printf("Enter a number: ");
  scanf("%ld", &n);
  while (n>0) {
    d = n % 10;
    ds[d]++;
    n /= 10;
  }

  printf("Digit: \t\t");
  for (i=0; i<ND; i++) {
    printf("%d ", i);
  }
  printf("\n");
  
  printf("Ocurrences: \t");
  for(i=0; i<ND; i++) {
    printf("%d ", ds[i]);
  }
  printf("\n");

  return 0;
}
