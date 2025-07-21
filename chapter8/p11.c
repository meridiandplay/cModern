/*
 * Chapter 8: Program 11:
 * Write a program that translates an alphabetic phone number
 * into numeric form and label it's output
 *
 */
#include <stdio.h>

int main (void) {

  int j=0, i1=0, i2=0;
  /* Declare an array of letters */
  char c[7] = {' ',' ',' ',' ',' ',' ',' '};

  /* Ask user for the input */
  printf("Enter phone number: ");
  scanf("%d-%d-", &i1, &i2);
  scanf("%c%c%c-%c%c%c%c", &c[0], &c[1], &c[2], &c[3], &c[4], &c[5], &c[6]);
  
  printf("In numeric form: "); 
  if ((i1!=0) && (i2!=0)) {
    printf("%d-%d-", i1, i2);
  } 
  
  for (j=0; j<7; j++) {
    if (j == 3) {
      printf("-");
    }
    switch(c[j]) {
      case 'A': case 'B': case 'C':
        printf("2"); break;
      case 'D': case 'E': case 'F':
	printf("3"); break;
      case 'G': case 'H': case 'I':
	printf("4"); break;
      case 'J': case 'K': case 'L':
	printf("5"); break;
      case 'M': case 'N': case 'O':
	printf("6"); break;
      case 'P': case 'R': case 'S':
	printf("7"); break;
      case 'T': case 'U': case 'V':
	printf("8"); break;
      case 'W': case 'X': case 'Y':
	printf("9"); break;
      case 'Z':
	printf("1"); break;
      default:
	printf("0"); break;
    }
  }

  /* Write last new line character */
  printf("\n");

  return 0;
}
