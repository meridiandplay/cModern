/*
 * Chapter 8: Exercise 11:
 * Write a declaration for an 8x8 char array named checker_board
 * and use a loop to fill the array with 'B' or 'R' data.
 *
 */

#include <stdio.h>

#define NROW 8
#define NCOL 8

int main (void) {
  
  int i=0, j=0;
  char checker_board[8][8] = {0};

  /* Fill the checker board */
  for (i=0; i<NROW; i++) {
    for (j=0; j<NCOL; j++) {
      if (((i+j)%2)) {
        checker_board[i][j] = 'R';
      } else {
        checker_board[i][j] = 'B';
      }
    }
  }
  
  /* Print the checker board */
  for (i=0; i<NROW; i++) {
    for (j=0; j<NCOL; j++) {
      printf("%c  ", checker_board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
