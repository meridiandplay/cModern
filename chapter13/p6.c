/*
 * Chapter 13: Program 6:
 * Improve planet.c program of Section 13.7 by having it ignore 
 * case when comparing command-line arguments with strings in planets
 * array.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define NUM_PLANETS 9

int string_equal (const char *s, const char *t);

int main (int argc, char *argv[]) {

  char *planets[] = {"Mercury","Venus","Earth","Mars","Jupiter",
	  "Saturn","Uranus","Neptune","Pluto"};
  int i=0, j=0;

  for (i=1; i<argc; i++) {
    for (j=0; j<NUM_PLANETS; j++) {
      if (string_equal(argv[i], planets[j])) {
        printf("%s is planet %d\n", argv[i], j+1);
	break;
      }
    }
    if (j==NUM_PLANETS) {
      printf("%s is not a planet \n", argv[i]);
    }
  }

  return 0;
}

int string_equal (const char *s, const char *t) {
  int i=0;
  for (i=0; toupper(s[i]) == toupper(t[i]); i++) {
    if(s[i]=='\0') {
      return 1;
    }
  }
  return 0;
}
