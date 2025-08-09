/*
 * Chapter 11: Exercise 8:
 * Write a function that when passed an array of integers
 * and the length of the array will return a pointer to the 
 * largest elements
 */

#include <stdio.h>

#define SIZE 10

int *find_largest (int a[], int n);

int main (void) {
  
  int i=0, numbers[SIZE]={0};
  printf("Enter %d numbers: ", SIZE);
  for (i=0; i<SIZE; i++) {
    scanf(" %d", &numbers[i]);
  }
  printf("Largest number: %d\n", *find_largest(numbers, SIZE));
  return 0;
}

int *find_largest (int a[], int n) {
  int i=0, index=0, largest=a[0];
  for (i=0; i<n; i++) {
    if (a[i]>largest) {
      index = i;
      largest = a[i];
    }
  }
  return &a[index];
}
 
