/*
 * Chapter 7: Program 5:
 * Write a program that computes the value of a word
 * using scrabble rules.
 *
 */
#include <ctype.h>
#include <stdio.h>

int main (void) {

  int p=0;
  /* Declare an array of letters */
  char ch=' ';
  /* Ask user for the input */
  printf("Enter a word: ");
  while ((ch = getchar()) != '\n') {
    switch(toupper(ch)) {
      case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
        p += 1; break;
      case 'D': case 'G':
	p += 2; break;
      case 'B': case 'C': case 'M': case 'P':
	p += 3; break;
      case 'F': case 'H': case 'V': case 'W': case 'Y':
	p += 4; break;
      case 'K':
	p += 5; break;
      case 'J': case 'X':
	p += 8; break;
      case 'Q': case 'Z':
	p += 10; break;
      default:
	p += 0; break;
    }
  }
  /* Print scrabble value to the user */
  printf("Scrabble value: %d\n", p);

  return 0;
}
