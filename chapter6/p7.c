/*
 * Chapter 6: Program 7:
 * Rearrange square3.c program so thath the for loop initializes i, 
 * tests i, and increments i. Don't rewrite the program; in particular, 
 * don't use any multiplication
 */

#include <stdio.h>

int main(void) {
  
  int i=0, n=0, odd=0, square=0;
  /* Ask user for the number of entries */
  printf("This program prints a table of squares.\n");
  printf("Enter a number of entries in table: ");
  scanf("%d", &n);
  printf("\n");
  printf("    Number    Square\n");

  /* Compute table of squares using odd method */
  for(i=1, odd=3, square=1; i<=n; odd +=2) {
  printf("%10d%10d\n", i, square);
  ++i;
  square += odd;
  } 

  return 0;
}
