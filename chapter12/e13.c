/*
 * Chapter 12: Exercise 13:
 * Rewrite the function to create and ident matrix of section 8.2 
 * using pointers instead of array subscripting
 *
 */

#include <stdio.h>

#define N 10

void create_ident (double ident[][N], int n);

int main (void) {
  int i=0, j=0;
  double m[N][N] = {0};
  create_ident(m, N);
  for (i=0; i<N; i++) {
    for (j=0; j<N; j++) {
      printf("%.2lf ", m[i][j]);
    }
    printf("\n");
  }
  return 0;
}

void create_ident (double ident[][N], int n) {
  int c=0;
  double *p;
  p = &ident[0][0];
  *p = 1.0;
  for (p=&ident[0][1]; p<=&ident[n-1][n-1]; p++) {
    if (c==10) {
      *p = 1.0;
       c = 0;
    } else {
      *p = 0.0;
      c++;
    }
  }
}

