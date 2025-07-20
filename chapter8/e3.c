/*
 * Chapter 8: Exercise 3:
 * Write a declaration of an array named weekend containing seven bool
 * values. Include an initializer that makes the first and last values
 * true. All other values shouldbe false.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define WSIZE 7
#define DSIZE 57

int main (void) {

  int i=0, j=0;
  bool wend[WSIZE] =  {true, false, false, false, false, false, true};
  int windex[WSIZE] =  {0, 7, 15, 25, 34, 41, 50};
  char wdays[DSIZE] = {'M','o','n','d','a','y',' ',
	               'T','u','e','s','d','a','y',' ',
		       'W','e','d','n','e','s','d','a','y',' ',
		       'T','h','u','r','s','d','a','y',' ',
		       'F','r','i','d','a','y',' ',
		       'S','a','t','u','r','d','a','y',' ',
		       'S','u','n','d','a','y',' '};
	               
  
  printf("Week day: ");
  for (i=0; i<WSIZE; i++) {
    if(wend[i]) {
      for(j=windex[i]; wdays[j]!=' '; j++) {
        printf("%c", wdays[j]);
      }
      printf(" ");
    }
  }
  printf("\n");
  return 0;
}
