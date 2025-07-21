/*
 * Chapter 8: Problema 7:
 * Write a program that reads a 5 x 5 array of integers and then prints
 * the row sums and the column sums:
 *
 */

#include <stdio.h>

#define NROW 5
#define NCOL 5

int main (void) {
  
  int m[NROW][NCOL] = {0};
  int i=0, j=0, total=0;
  
  for (i=0; i<NROW; i++) {
    printf("Enter row %d: ", i+1);
    scanf("%d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);
  }
  
  printf("Row totals: ");
  for (i=0; i<NROW; i++) {
    for(j=0; j<NCOL; j++) {
      total += m[i][j];
    }
    printf("%d ", total);
    total=0;
  }
  printf("\n");

  printf("Column totals: ");
  for (j=0; j<NROW; j++) {
    for(i=0; i<NCOL; i++) {
      total += m[i][j];
    }
    printf("%d ", total);
    total=0;
  }
  printf("\n");

  return 0;
}
