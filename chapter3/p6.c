/*
 * Chapter 3: Program 6, Modify the addfrac.c program
 * of Section 3.2 so that the user is allowed to enter
 * both fractions at the same time separated by '+' sign
 */

#include <stdio.h>

int main (void)
{
  // Declare variables and initialize them
  int n1=0, d1=0, n2=0, d2=0, rn=0, rd=0;


  // Ask user to enter first fraction, scanf matches fraction allowing any number of spaces between n1 and d1
  printf("Enter two fractions separated by a plus sign: ");
  scanf("%d / %d + %d / %d", &n1, &d1, &n2, &d2);

  // Calculate the resulting fraction using a simple common denom technique
  rn = n1 * d2 + n2 * d1;
  rd = d1 * d2;

  // Print resulting fraction
  printf("The sum is %d/%d\n", rn, rd);

  return 0;

}
