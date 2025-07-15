/*
 * Chapter 5: Program 10:
 * Write a program that conversta a numerical grade into a letter grade using the switch
 * statement.
 */

#include <stdio.h>

int main (void) {

  int igrade=0, th=0;
  
  /* Ask the user for the numerical grade */
  printf("Enter numerical grade: ");
  scanf("%d", &igrade);

  /* Get the tenth digit to evaluate grade */
  th = igrade / 10;

  /* Evaluate the grade and print the letter */
  printf("Letter grade: ");
  switch (th) {
    case 0: case 1: case 2: case 3: case 4: case 5:
      printf("F\n"); break;
    case 6:
      printf("D\n"); break;
    case 7:
      printf("C\n"); break;
    case 8:
      printf("B\n"); break;
    case 9: case 10:
      printf("A\n"); break;
    default:
      printf("Invalid grade\n"); break;
  }
  return 0;
}

