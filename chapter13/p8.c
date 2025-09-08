/*
 * Chapter 13: Program 8:
 * Write a program that computes the value of a word
 * using scrabble rules. The program should include the following
 * function int compute_scrabble_value(const char *word) that should
 * return the scrabble value of the string pointed to by word.
 *
 */


#include <ctype.h>
#include <stdio.h>

#define WSIZE 31

int compute_scrabble_value (const char *word);

int main (void) {

  /* Declare an array of letters */
  char w[WSIZE]={0};

  /* Ask user for the input */
  printf("Enter a word: ");
  scanf("%30s", w);
  printf("Scrabble value: %d\n", compute_scrabble_value(w));

  return 0;
}

int compute_scrabble_value (const char *word) {
  int p=0;
  const char *ch;
  
  for(ch=word; *ch!='\0'; ch++) {
     switch(toupper((unsigned char)*ch)) {
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

  return p;
}
