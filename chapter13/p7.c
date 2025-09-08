/*
 * Chapter 13: Program 7:
 * Write a program that asks the user for a two-digit number then
 * prints the English word for the number. Use arrays containing pointers
 * to strings instead of switch statements.
 *
 */

#include <stdio.h>

int main (void) {
  const char *tens[]={"","","twenty","thirty","fourty","fifty","sixty",
	                "seventy","eighty","ninty",""};
  const char *ones[]={"zero","one","two","three","four","five","six",
	              "seven","eight","nine","ten","eleven","twelve",
                      "thirteen","fourteen","fifteen","sixteen","seventeen",
		      "eight","teen","nineteen"}; 
  int inumber=0, th=0, u=0;
  /* Ask user for the input number */
  printf("Enter two-digit number: ");
  scanf("%d", &inumber);

  /* Obtain the two digits */
  th = inumber / 10;
  u = inumber % 10;

  /* First evaluate if number is a valid number */
  if ((inumber < 0) || (th > 9)) {
    printf("That is not a valid number, number must be positive two digit\n");
    return 0;
  }
  
  if (th>1) {
    printf("%s %s\n", tens[th], ones[u]);
  } else {
    printf("%s\n", ones[inumber]);
  }
  
  return 0;
}
