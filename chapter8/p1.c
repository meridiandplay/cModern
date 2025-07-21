/*
 * Chapter 8: Program 1:
 * Modify repdigit.c so that it shows which digits (if any)
 * were repeated.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define ND 10

int main (void) {

  bool nod=true;
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

  printf("Repeated digit: ");
  for (i=0; i<ND; i++) {
    if(ds[i]>1) {
      printf("%d ", i);
      nod = false;
    }
  }
  if(nod) {
    printf("No digits were repeated.\n");
  } else {
    printf("\n");
  }

  return 0;
}
