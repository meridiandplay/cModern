/*
 * Chapter 7: Program 2:
 *
 * Modify square2.c program of Section 6.3 so that it pauses
 * after every 24 squares and displays the following message:
 * Press Enter to continue...
 * After displaying the message, the program should use getchar
 * to read a character. getchar won't allow to continue until
 * the user presses the Enter key.
 *
 */

#include <stdio.h>

int main (void) {
  
  long i=0, n=0;

  printf("This program prints a table of squares\n");
  printf("Enter number of entries in table: ");
  scanf("%ld", &n);
  /* Clean (discard) what's left in input buffer from the last \n 
   * so that next gettchar starts clean */
  getchar();

  for (i=1;i<=n;i++) {
    if (i % 24 == 0) {
      printf("Press Enter to continue, q+Enter to quit...\n");
      if ( getchar() == 'q' ) {
	 break;
      } else {
	 continue;
      }
    }
    printf("%20ld\t%20ld\n",i, i*i);
  }

  // printf("%20ld\t%20ld\n",n, n*n);
  
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
