/*
 * Chapter 17: Extra 1.2:
 * Write a program that ask for the numbers of students then
 * asks for a list of grades and prints the average grade for 
 * the entire classroom
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define CAP 5

int main (void) {
  double *tmp=NULL, avg=0.0;
  int i=0, cap=CAP, students=0;
  double *grades=malloc(sizeof(*grades)*cap);
  if (grades==NULL) { printf("Couldn't allocate more memory.\n"); free(grades); exit(EXIT_FAILURE);}
  printf("How many students to register? ");
  scanf("%d", &students);
  if (students>=CAP) {
    cap = students;
    tmp = realloc(grades, cap * sizeof(*grades));
    if (tmp==NULL) { printf("Couldn't allocate more memory.\n"); free(grades); exit(EXIT_FAILURE);}
    grades = tmp;
  }
  printf("Enter list of grades: ");
  for (i=0; i<students; i++) {
    scanf("%lf", (grades+i));
  }
  for (i=0; i<students; i++) {
    avg += grades[i];
  }
  avg /= students;
  printf("Average for the classroom: %lf\n", avg);
  free(grades);
  return 0;
}
