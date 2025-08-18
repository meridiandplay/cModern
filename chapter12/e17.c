/*
 * Chapter 12: Exercise 17
 * Rewrite function sum_two_dimensional_array to use pointer
 * arithmetic instead of array subscripting. 
 * Use a single loop instead of nested loops.
 */

#include <stdio.h>

#define LEN 4

int sum_two_dimensional_array (const int *a, int n);


int main (void) {
  
  int a[LEN][LEN] = {{1,1,1,1}, {1,1,1,1}, 
	  {1,1,1,1}, {1,1,1,1}};

  printf("The sum of all elements of arrays is: %d\n",
		  sum_two_dimensional_array(&a[0][0], LEN));
  return 0;
}

int sum_two_dimensional_array (const int *a, int n) {
  const int *p;
  int sum=0;
  for (p=a; p<a+(size_t)n*n; p++) {
    sum += *p;
  }
  return sum;
}
