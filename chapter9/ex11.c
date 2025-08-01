/*
 * Chapter 9: Exercise 11:
 * Write a function that computes GPA given an array of grades
 * and an array length.
 *
 */

#include <stdio.h>

#define LEN 10

float compute_GPA(char grades[], int n);

int main (void) {
  int i=0;
  char g[LEN] = {0};
  printf("Write a list of 10 grades for a student: ");
  for(i=0; i<LEN; i++) {
    scanf(" %c", &g[i]);
  }
  printf("GPA is: %f\n", compute_GPA(g, LEN));
  return 0;
}

float compute_GPA(char grades[], int n) {
  int i=0;
  float avg=0.0, points=0.0;
  for(i=0; i<n; i++) {
    switch(grades[i]) {
      case 'a': case 'A': points=4.0; break;
      case 'b': case 'B': points=3.0; break;
      case 'c': case 'C': points=2.0; break;
      case 'd': case 'D': points=1.0; break;
      case 'f': case 'F': points=0.0; break;
      default: points=0.0; break;
    }
    avg += points;
  }
  avg /= n;
  return avg;
}
