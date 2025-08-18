/*
 * Chapter 9: Exercise 13:
 * Write the following function which evaluates a chess position
 * int evaluate_position (char board[8][8]) where board represents
 * a configuration of pieces on a chessboard, white pieces are
 * uppercase while black pieces are lower case, the function
 * should sum points of white pieces and also sum points of
 * black pieces, then return the difference between the two
 * the final value will be positive if whites have adv and
 * negative if blacks have adv
 *
 */

#include <stdio.h>
#include <ctype.h>

#define LEN 8

int evaluate_position (char *b, int n);

int main (void) {
  char b[8][8] = {{'r','n','b','q','k','b','n','r'},
	          {'p','p','p','p','p','p','p','p'},
		  {' ','.',' ','.',' ','.',' ','.'},
		  {'.',' ','.',' ','.',' ','.',' '},
		  {' ','.',' ','.',' ','.',' ','.'},
		  {'.',' ','.',' ','.',' ','.',' '},
		  {'P','P','P','P','P','P','P','P'},
		  {'R','N','B','Q','K','B','N','R'}};

  printf("Evaluated at: %d\n", evaluate_position(&b[0][0], LEN));
  return 0;
}

int evaluate_position (char *b, int n) {
  int adv=0, points=0;
 char *p;
  for (p = b; p<b+(n*n); p++) {
    if (isalpha(*p)) {
      switch(*p) {
        case 'Q': points=9; break;
        case 'R': points=5; break;
        case 'B': points=3; break;
        case 'N': points=3; break;
        case 'P': points=1; break;
        case 'q': points=-9; break;
        case 'r': points=-5; break;
        case 'b': points=-3; break;
        case 'n': points=-3; break;
        case 'p': points=-1; break;
        default: points=0; break;
      }
      adv += points;
    }
  }
  return adv;
}
