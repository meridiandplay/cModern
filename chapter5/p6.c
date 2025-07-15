/* 
 * Chapter 5: Program 5:
 * Modify the upc.c program of Section 4.1 so that it checks whether a UPC
 * is valid. After the users enters a UPC the program will display either "VALID"
 * or "NOT VALID"
 */

#include <stdio.h>

int main (void) {
  
  // Declare variables
  int d=0, i1=0, i2=0, i3=0, i4=0, i5=0;
  int j1=0, j2=0, j3=0, j4=0, j5=0;
  int sum1=0, sum2=0, total=0;
  int entered_check_digit=0;
  int check_digit=0;

  // Get the UPC input
  printf("Enter an UPC: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
		  &d, 
		  &i1, &i2, &i3, &i4, &i5, 
		  &j1, &j2, &j3, &j4, &j5,
		  &entered_check_digit);

  // Compute check digit
  sum1 = d + i2 + i4 + j1 + j3 +j5;
  sum2 = i1 + i3 + i5 + j2 + j4;
  total = 3 * sum1 + sum2;
  check_digit = 9 - ((total - 1) % 10);

  // Print result
  printf("Check digit: %d\n", check_digit);

  if(check_digit == entered_check_digit)
    printf("VALID\n");
  else
    printf("NOT VALID\n");

  return 0;
}
