/*
 * Chapter 8: Program 6:
 * Write a B1FF filter that reads a message entered by the user
 * and translates it into B1FF speak.
 *
 */

#include <stdio.h>
#include <ctype.h>

#define EX 10
#define MAX 100

int main (void) {
  
  char ch=0;
  char n[MAX]={0};
  int i=0, size=0;

  /* Get message */
  printf("Enter message: ");
  for (i=0; (ch=getchar())!='\n'; i++){
    n[i] = ch;
  }
  size = i+1;

  /* Apply B1FF filter */
  printf("In B1FF speak: ");
  for (i=0; i<size; i++) {
    switch(n[i]) {
      case 'a': case 'A':
        n[i]='4';
	break;
      case 'b': case 'B':
	n[i]='8';
	break;
      case 'e': case 'E':
	n[i]='3';
	break;
      case 'i': case 'I':
	n[i]='1';
	break;
      case 'o': case 'O':
	n[i]='0';
	break;
      case 's': case 'S':
	n[i]='5';
	break;
      case ' ': case '.':
	break;
      default:
	n[i] = toupper(n[i]);
	break;
    }
  }
  
  /* Print message in B1FF speak */
  for (i=0; i<size; i++) {
    printf("%c", n[i]);
  }
  for (i=0; i<EX; i++) {
    printf("!");
  }
  printf("\n");

  return 0;
}
