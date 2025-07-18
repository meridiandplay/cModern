/*
 * Chapter 8: Exercise 6:
 * Write a program that displays digits from 0 to 9
 * in digital clock form.
 *
 */

#include <stdio.h>

#define ND 10
#define NSEG 7
#define NLINE 3

int main (void) {
  int l=0, i=0;
  const int s[ND][NSEG] = {{1,1,1,1,1,1,0}, {0,1,1,0,0,0,0},
	                   {1,1,0,1,1,0,1}, {1,1,1,1,0,0,1},
			   {0,1,1,0,0,1,1}, {1,0,1,1,0,1,1},
			   {1,0,1,1,1,1,1}, {1,1,1,0,0,0,0},
			   {1,1,1,1,1,1,1}, {1,1,1,1,0,1,1}};
  
  /* Loop for all 3 lines */
  for (l=0; l<NLINE; l++) {
    switch(l) {
      case 0:
	printf(" ");
        for (i=0; i<ND; i++) {
	  if (s[i][0]) {
            printf("_");
	  } else {
	    printf(" ");
	  }
	  printf("    ");
	}
	printf("\n");
	break;
      case 1:
	for (i=0; i<ND; i++) {
	  if(s[i][5]) {
	    printf("|");
	  } else {
	    printf(" ");
	  }
	  if(s[i][6]) {
	    printf("_");
	  } else {
            printf(" ");
	  }
	  if(s[i][1]) {
            printf("|");
	  } else {
	    printf(" ");
	  }
	  printf("  ");
	}
	printf("\n");
	break;
      case 2:
	for (i=0; i<ND; i++) {
	  if(s[i][4]) {
            printf("|");
	  } else {
	    printf(" ");
	  }
	  if(s[i][3]) {
	    printf("_");
	  } else {
	    printf(" ");
	  }
	  if(s[i][2]) {
            printf("|");
	  } else {
	    printf(" ");
	  }
	  printf("  ");
	}
	printf("\n");
	break;
      default:
	break;
    }
  }
  return 0;
}
