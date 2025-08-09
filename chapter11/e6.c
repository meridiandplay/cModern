/*
 * Chapter 11: Exercise 6:
 * Write a function that finds the largest and second largest elements
 * of an array
 *
 */

#include <stdio.h>

#define SIZE 10

void find_two_largest (int a[], int n, int *largest, int *second_largest);

int main (void) {
  int a[SIZE] = {0};
  int l=0, sl=0, i=0;
  printf("Write %d integer numbers to find largest and second largest: ", SIZE);
  for (i=0; i<SIZE; i++) {
    scanf(" %d", &a[i]);
  }
  find_two_largest(a, SIZE, &l, &sl);
  printf("The largest element is: %d\n", l);
  printf("The second largest element is: %d\n", sl);
  return 0;
}

void find_two_largest (int a[], int n, int *largest, int *second_largest) {
  int i=0;
  if (a[0]>a[1]) {
    *largest = a[0];
    *second_largest = a[1];
  } else {
    *largest = a[1];
    *second_largest = a[0];
  }
  for (i=0; i<n; i++) {
    if (a[i] > *largest) {
      *second_largest = *largest;
      *largest = a[i];
    } else if (a[i] > *second_largest && a[i] != *largest) {
      *second_largest = a[i];
    }
  }
}
