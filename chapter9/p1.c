/*
 * Chapter 9: Problem 1:
 * Write a program that ask the user to enter a series of integers
 * then sorts the integers by calling the function selection_sort.
 * selection_sort must search the array to find the largest element
 * then move it to the last position of the array and call itself
 * using the same array and the size-1 as arguments.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Prototype (declaration)
void selection_sort (int a[], int n);

// Function definition
void selection_sort (int a[], int n) {
  int i=0, t=0, max=0;
  if (n>1) {
    for (i=0; i<n; i++) {
      if (a[i]>max) {
        max=a[i];
        t=i;
      }
    }
    a[t] = a[n-1];
    a[n-1] = max;
    selection_sort (a, n-1);
  }
}

int main (void) {
  
  int i=0;
  int numbers[SIZE] = {0};
  printf("Enter array of %d numbers: ", SIZE);
  scanf("%d %d %d %d %d %d %d %d %d %d",
		  &numbers[0], &numbers[1], &numbers[2], &numbers[3], &numbers[4],
		  &numbers[5], &numbers[6], &numbers[7], &numbers[8], &numbers[9]);

  selection_sort(numbers, SIZE);
  
  for (i=0; i<SIZE; i++) {
    printf("%d ", numbers[i]);
  }

  printf("\n");

  return 0;
}
