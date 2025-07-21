/*
 * Chapter 8: Exercise 10:
 * Write a declaration for an 8x8 char array named chess_board
 * Include an initializer that puts the following data into the array
 * one character per array element.
 *
 */

#include <stdio.h>

#define NROW 8
#define NCOL 8

int main (void) {
  
  int i=0, j=0;
  char chess_board[8][8] = {{'r','n','b','q','k','b','n','r'},
	                    {'p','p','p','p','p','p','p','p'},
			    {' ','.',' ','.',' ','.',' ','.'},
		            {'.',' ','.',' ','.',' ','.',' '},
			    {' ','.',' ','.',' ','.',' ','.'},
			    {'.',' ','.',' ','.',' ','.',' '},
			    {'P','P','P','P','P','P','P','P'},
			    {'R','N','B','Q','K','B','N','R'}};

  /* Print the chess board */
  for (i=0; i<NROW; i++) {
    for (j=0; j<NCOL; j++) {
      printf("%c  ", chess_board[i][j]);
    }
    printf("\n");
  }

  return 0;
}
