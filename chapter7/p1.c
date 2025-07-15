/*
 * Chapter 7: Program 1:
 *
 * Run square2.c porogram and determine the smallest value of n that
 * causes failure. Try changing the type of i to short and repeat. Then
 * try long type for the i variable. Annotate in comment number of bits
 * of the short, int and long variable on your machine.
 *
 */

#include <stdio.h>

int main (void) {
  
  long i=0, n=0;

  printf("This program prints a table of squares\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);

  /*
  for (i=1;i<=n;i++) {
  printf("%30ld%30ld\n",i, i*i);
  }
  */

  printf("%20ld\t%20ld\n",n, n*n);
  
  /* For i being int type, the smallest value of i that causes 
   * the program to behave strange is 46341. Imax = 2³² therefore
   * in this machine int is 32 bits.
   *
   * For i being short type, the smallest value of i that causes
   * the program to behave strange is 181. Imax = 2¹⁶ therefore
   * in this machine short is 16 bits.
   *
   * For i being long type, the smallest value of i that causes
   * the program to behave strange is 3037000500. Imax = 2⁶⁴ therefore
   * in this machine long is 64 bits.
   */

  return 0;
}
