/* 
 * Chapter 4: Program 4:
 * Write the program that ask the user to enter a number between 0 and 32767 then
 * print the number in octal, with five digits even if fewer digits are suficient.
 */

#include <stdio.h>

#define OCTAL_DIGITS 5

int main (void) { 

  // Declare and initialize
  int number=0, o[OCTAL_DIGITS]={0,0,0,0,0};
  // Get the input
  printf("Enter a number between 0 and 32767: ");
  scanf("%d", &number);
  
  /* Using loops */
  int q=0, i=0;
  q = number;
  for (i=0; i<OCTAL_DIGITS; i++) {
  o[i] = q % 8;
  q /= 8;
  }
  
  /* Without using loops
  o[0]=number%8;
  o[1]=(number/8)%8;
  o[2]=(number/8/8)%8;
  o[3]=(number/8/8/8)%8;
  o[4]=(number/8/8/8/8)%8;
  */

  // Print solution
  printf("In octal your number is: %d%d%d%d%d\n", o[4], o[3], o[2], o[1], o[0]);

  return 0;
}
