/*
 * Chapter 8: Program 12:
 * Write a program that computes the value of a word
 * using scrabble rules. Use arrays to store points
 *
 */
#include <ctype.h>
#include <stdio.h>

#define SIZE 8
int main (void) {

  int p=0, i=0;
  /* Declare array of points */
  int points[SIZE] = {1,2,3,4,5,8,10,0};
  char ch=0;
  /* Ask user for the input */
  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    switch(toupper(ch)) {
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
        i = 0; break;
      case 'D': case 'G':
	i = 1; break;
      case 'B': case 'C': case 'M': case 'P':
	i = 2; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
	i = 3; break;
      case 'K':
	i = 4; break;
      case 'J': case 'X':
	i = 5; break;
      case 'Q': case 'Z':
	i = 6; break;
      default:
	i = 7; break;
    }
    p += points[i];
  }
  /* Print scrabble value to the user */
  printf("Scrabble value: %d\n", p);

  return 0;
}
