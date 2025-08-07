/*
 * Chapter 10: Program 7:
 * Write a program that displays a number entered by the user 
 * in seven segments display. The maximum number of digits is 10.
 * Any character other than a digit and any other digit past
 * 10 will be ignored.
 *
 */

#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>

#define MAXD 10
#define NSEG  7
#define LINES 3
#define WIDE  4


/* external variables */
const int s[MAXD][NSEG] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0},
	                   {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1},
            	           {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1},
  			   {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0},
			   {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};
char digits[LINES][MAXD*WIDE] = {0};

/* prototypes */
void clear_digits_array (void);
void process_digit (int digit, int position);
void print_digits_array (void);


int main (void) {
  int p=0;
  char ch=0;
  clear_digits_array();
  printf("Enter a number: ");
  while (ch != '\n' && p<10) {
    scanf("%c", &ch);
    if (isdigit((unsigned int)ch)) {
      process_digit(atoi(&ch), p);
      p++;
    }
  }
  print_digits_array();
  return 0;
}

void clear_digits_array (void) {
  int i=0, j=0;
  for (i=0; i<LINES; i++) {
    for (j=0; j<MAXD*WIDE; j++) {
      digits[i][j] = ' ';
    }
  }
}

void process_digit (int digit, int position) {
  int l=0;
  for (l=0; l<NSEG; l++) {
    if (s[digit][l]) {
      switch (l) {
        case 0: digits[0][1+(WIDE*position)] = '_'; break; 
        case 1: digits[1][2+(WIDE*position)] = '|'; break; 
        case 2: digits[2][2+(WIDE*position)] = '|'; break; 
        case 3: digits[2][1+(WIDE*position)] = '_'; break; 
        case 4: digits[2][0+(WIDE*position)] = '|'; break; 
        case 5: digits[1][0+(WIDE*position)] = '|'; break; 
        case 6: digits[1][1+(WIDE*position)] = '_'; break; 
	default: break;	
      }   
    }
  }
}

void print_digits_array (void) {
  int i=0, j=0;
  for (i=0; i<LINES; i++) {
    for(j=0; j<MAXD*WIDE; j++) {
      printf("%c", digits[i][j]);
    }
    printf("\n");
  }
  printf("\n");
}
