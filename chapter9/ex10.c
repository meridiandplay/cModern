/*
 * Chapter 9: Exercise 10:
 * Write functions that returns the following values:
 * Largest element in a
 * Average of all elements in a
 * Number of positive elements in a
 * Assume that a and n are parameters where a is an array of int values
 * and n is the length of the array
 *
 */

#include <stdio.h>

#define LEN 10

int   largest (int a[], int n);
double average (int a[], int n);
int   npos    (int a[], int n);

int main (void) {
  int a[LEN] = {0};
  printf("Write a list of 10 integer numbers: ");
  scanf("%d %d %d %d %d %d %d %d %d %d", 
		  &a[0], &a[1], &a[2], &a[3], &a[4],
		  &a[5], &a[6], &a[7], &a[8], &a[9]);
  
  printf("The largest is; %d\n", largest(a, LEN));
  printf("The average is: %lf\n", average(a, LEN));
  printf("The number of positive integers is: %d\n", npos(a, LEN));

  return 0;
}

int largest (int a[], int n) {
  int i=0, max=a[0];
  for(i=0; i<n; i++) {
    if(a[i]>max) {
      max = a[i];
    }
  }
  return max;
}

double average (int a[], int n) {
  int i=0;
  double avg=0.0;
  for(i=0; i<n; i++) {
    avg += a[i];
  }
  avg /= n;
  return avg;
}

int npos (int a[], int n) {
  int i=0, npos=0;
  for(i=0; i<n; i++) {
    if(a[i]>0) {
      npos++;
    }
  }
  return npos;
}
