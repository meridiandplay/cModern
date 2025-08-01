/*
 * Chapter 9: Exercise 14:
 * The following function has_zero should return true if there is
 * a 0 in the entire a array and false if all elements of a are
 * non-zero
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define LEN 10

bool has_zero(int a[], int n);

int main (void) {
  int a[LEN] = {1, 1, 1, 1, 1, 1, 1, 1, 1, 1};
  printf("The array: %s", 
		  has_zero(a, LEN) ? "has a zero\n" : "has not a single zero\n");
  return 0;
}

bool has_zero (int a[], int n) {
  int i=0;
  for (i=0; i<n; i++) {
    if (a[i]==0) {
      return true;
    }
  }
  return false;
}
