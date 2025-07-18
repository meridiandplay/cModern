/*
 * Chapter 8: Exercise 9:
 * Write a program that makes a random walk and print the end game board
 * after the player moves from A to Z times.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <time.h>

#define NROW  10
#define NCOL  10
#define ALPH  26
#define DIRE  4

#define UP    0
#define RIGHT 1
#define DOWN  2
#define LEFT  3

/* Global variables */
bool caged = false;
int  i=-1, j=0;
char board[NROW][NCOL] = {0};

void move(void) {
  /* Reset move controllers */
  bool dir[DIRE] = {false};
  bool invalid = true;
  int cc=0, m=0;
  /* Save initial position */
  int x=i,y=j;
  do {
    /* Check if caged */
    if (cc==4) {
      caged = true;
      break;
    }
    /* Get random move */
    m = rand() % DIRE;
    /* Check if direction already used and get random move*/
    while (dir[m]) {
      m = rand() % DIRE;
    }
    switch (m) {
      case UP:    --i; break;
      case RIGHT: ++j; break;
      case DOWN:  ++i; break;
      case LEFT:  --j; break;
    }
    /* Check if outside or occupied*/
    if ((i<0) || (j<0) || (i>=10) || (j>=10) || (board[i][j] != '.')) {
      /* Restore position to try again */
      i = x;
      j = y;
      /* Delete possible move from directions */
      dir[m] = true;
      /* Force loop to move again */
      invalid = true;
      /* Add one to caged counter */
      ++cc;
    } else {
      /* Valid move */
      invalid = false;
    }
  } while (invalid);
}

int main (void) {
 	
  const char abc[ALPH] = {'A','B','C','D','E','F','G',
	                  'H','I','J','K','L','M','N',
			  'O','P','Q','R','S','T','U',
			  'V','W','X','Y','Z'};

  int r=0, c=0, a=0;
  
  /* Fill board with '.' */
  for (r=0; r<NROW; r++) {
    for (c=0; c<NCOL; c++) {
     board[r][c] = '.';
    }
  }
  
  /* Generate random seed */
  srand ((unsigned) time(NULL));
  
  /* Main loop */ 
  for (a=0; a<ALPH; a++) {
    move();
    if (caged) {
      break;
    } else {
      board[i][j] = abc[a];
    }
  }
  
  /* Print board */
  for (r=0; r<NROW; r++) {
    for (c=0; c<NCOL; c++) {
      printf("%c ", board[r][c]);
    }
    printf("\n");
  }
  
  return 0;
}




