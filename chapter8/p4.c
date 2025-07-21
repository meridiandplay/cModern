/*
 * Chapter 8: Problem 4:
 * Modify reverse.c program to use the expression
 * (int) (sizeof(a) / sizeof(a[0])) for the array length
 *
 */

#include <stdio.h>
#define L ((int) (sizeof(a)/sizeof(a[0])))

int main (void) {
  
  int a[10] = {0};
  int i = 0;
  printf("Enter %d numbers: ", L);
  for(i=0; i<L; i++) {
    scanf("%d", &a[i]);
  }
  printf("In reverse order: ");
  for(i=L-1; i>=0; i--) {
    printf("%d ", a[i]);
  }
  printf("\n");

  return 0;
}
