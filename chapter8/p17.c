/*
 * Chapter 8: Program 17:
 * Write a program that prints an n x n magic square
 *
 */

#include <stdio.h>

#define ULIMIT 99
#define LLIMIT 1

int main (void) {
  
  int i=0, j=0, z=0, n=0, lasti=0, lastj=0, width=0, max=0;

  printf("This program creates a magic square of a specific size.\n");

  /* Get square size */
  do {
    printf("The size must be an odd number between 1 and 99.\n");
    printf("Enter size of magic square: ");
    scanf("%d", &n);
  } while((n>ULIMIT) || (n<LLIMIT) || (n%2==0));
  
  /* Get printing width */
  max = n*n;
  while (max>0) {
     width++;
     max/=10;
  }
  /* Declare VLA */
  int magic[99][99]={0};

  /* Create magic square using Siamese method */
  for(i=n*n, j=n/2, z=1; z<n*n+1; z++, i--, j++) {
     /* Check for colision, and reupdate index accordingly */
     if (magic[i%n][j%n]) {
       i = (lasti + 1);
       j = lastj;
     }
     magic[i%n][j%n] = z;
     lasti = i;
     lastj = j;
  }

  /* Print magic square */
  for (i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%*d ", width, magic[i][j]);
    }
    printf("\n");
  }

  return 0;
}
