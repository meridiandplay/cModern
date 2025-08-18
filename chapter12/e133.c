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
  int c=0, i=0;
  double (*p)[n];
  p = ident;

  for (i=0; i<n; i++) {
    for (c=0, p=ident; p<ident + n; p++, c++) {
      if (c==i) {
        (*p)[i]=1.0;
      } else {
        (*p)[i]=0.0;
      }
    }
  }
}

