/*
 * Chapter 9: Program 5:
 * Write a program that prints an n x n magic square
 * The program should include 2 functions create_magic_square and
 * print_magic_square.
 * create_magic_square will fill magic_square[n][n]
 * print_magic_square will display magic_square[n][n]
 *
 */

#include <stdio.h>

#define ULIMIT 99
#define LLIMIT 1

/* Prototypes */
void create_magic_square(int n, int magic_square[ULIMIT][ULIMIT]);
void print_magic_square(int n, int width, int magic_square[ULIMIT][ULIMIT]);


void create_magic_square(int n, int magic_square[ULIMIT][ULIMIT]) {
  int i=0, j=0, z=0, lasti=0, lastj=0;
  /* Create magic square using Siamese method */
  for(i=n*n, j=n/2, z=1; z<n*n+1; z++, i--, j++) {
     /* Check for colision, and reupdate index accordingly */
     if (magic_square[i%n][j%n]) {
       i = (lasti + 1);
       j = lastj;
     }
     magic_square[i%n][j%n] = z;
     lasti = i;
     lastj = j;
  }
}

void print_magic_square(int n, int width, int magic_square[ULIMIT][ULIMIT]) {
  int i=0, j=0;
  for (i=0; i<n; i++) {
    for(j=0; j<n; j++) {
      printf("%*d ", width, magic_square[i][j]);
    }
    printf("\n");
  }
}

int main (void) {
  
  int n=0, width=0, max=0;

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
  /* Declare VLA, not supported so fix a size instead */
  int magic[ULIMIT][ULIMIT]={0};

  /* Create magic square */
  create_magic_square(n, magic);

  /* Print magic square */
  print_magic_square(n, width, magic);

  return 0;
}
