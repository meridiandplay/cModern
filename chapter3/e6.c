/*
   Chapter 3: Exercise 6, Show how to modify the addfrac.c program
   of Section 3.2 so that the user is allowed
   to enter fractions that contain spaces before and after '\'
*/
#include <stdio.h>

int main (void)
{
  // Declare variables and initialize them
  int n1=0, d1=0, n2=0, d2=0, rn=0, rd=0;


  // Ask user to enter first fraction, scanf matches fraction allowing any number of spaces between n1 and d1
  printf("Enter first fraction: ");
  scanf("%d / %d", &n1, &d1);

  // Ask user to enter second fraction, scanf matches fraction allowing any number of spaces between n2 and d2
  printf("Enter second fraction: ");
  scanf("%d / %d", &n2, &d2);

  // Calculate the resulting fraction using a simple common denom technique
  rn = n1 * d2 + n2 * d1;
  rd = d1 * d2;

  // Print resulting fraction
  printf("The sum is %d/%d\n", rn, rd);

  return 0;

}
