/* 
 * Chapter 4: Program 5:
 * Rewrite the upc.c program of Section 4.1 so that the user enters 11 digits
 * at one time, instead of entering one digit, then five digits
 * and then another five digits.
 */

#include <stdio.h>

int main (void) {
  
  // Declare variables
  int i1=0, i2=0, i3=0, i4=0, i5=0, i6=0, i7=0, i8=0, i9=0, i10=0, i11=0, i12=0;
  int sum1=0, sum2=0, total=0;
  int check_digit=0;

  // Get the UPC input
  printf("Enter the first 12 digits of a EAN: ");
  scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", 
		  &i1, &i2, &i3, &i4, &i5, &i6, 
		  &i7, &i8, &i9, &i10, &i11, &i12);

  // Compute check digit
  sum1 = i2 + i4 + i6 + i8 + i10 + i12;
  sum2 = i1 + i3 + i5 + i7 + i9 + i11;
  total = 3 * sum1 + sum2;
  check_digit = 9 - ((total - 1) % 10);

  // Print result
  printf("Check digit: %d\n", check_digit);

  return 0;
}
