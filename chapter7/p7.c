/*
 * Chapter 3: Program 7, Modify the addfrac.c program
 * of Section 3.2 so that the user is allowed to enter
 * both fractions separater by a mathematical operator
 * symbol (+, -, /, *)
 */

#include <stdio.h>

int main (void)
{
  /* Declare variables and initialize them */
  int n1=0, d1=0, n2=0, d2=0, rn=0, rd=0;
  char s=' ';

  /* Ask user to enter first fraction, scanf matches fraction allowing any number of spaces between n1 and d1 */
  printf("Enter two fractions separated by a mathematical operator: ");
  scanf("%d / %d %c %d / %d", &n1, &d1, &s ,&n2, &d2);
  
  /* Evaluate mathematical symbol and operate fractions accordingly */
  switch (s) {
    case '+':
      rn = n1*d2 + n2*d1;
      rd = d1*d2;
      break;
    case '-':
      rn = n1*d2 - n2*d1;
      rd = d1*d2;
      break;
    case '/':
      rn = n1*d2;
      rd = d2*n1;
      break;
    case '*':
      rn = n1*n2;
      rd = d1*d2;
      break;
    default:
      printf("Incorrect operator\n");
  }
  /* Print resulting fraction */
  printf("The result is %d/%d\n", rn, rd);

  return 0;

}
