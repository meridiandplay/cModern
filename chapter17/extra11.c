/*
 * Chapter 17: Extra 1.1:
 * Write a small program that uses a dynamically memory
 * adapting read_line function that returns a pointer to the
 * input sentence entered by the user.
 * Finally print out the sentence like an echo world
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define L 10

char *read_line (void);

int main (void) {
  char *sentence=NULL;
  printf("Write a line: ");
  sentence = read_line();
  printf("%s!\n", sentence);
  free(sentence);
  return 0;
}


char *read_line (void) {
  char *start=NULL, *tmp=NULL;
  int i=0, ch=0, cap=L;
  start=malloc(sizeof(*start)*cap);
  if(start==NULL) {printf("Couldn't allocate mem.\n"); exit(EXIT_FAILURE);}
  for (ch=0, i=0; (ch=getchar())!='\n'&&ch!=EOF; i++) {
    if (i==cap) {
      cap *= 2;
      tmp = realloc(start, (sizeof(*start)*cap));
      if(tmp==NULL) {printf("Couldn't allocate mem.\n"); free(start); exit(EXIT_FAILURE);}
      start = tmp;
    }
    start[i]=ch;
  }
  if (i==cap) {
      cap *= 2;
      tmp = realloc(start, (sizeof(*start)*cap));
      if(tmp==NULL) {printf("Couldn't allocate mem.\n"); free(start); exit(EXIT_FAILURE);}
      start = tmp;
  }
  start[i]='\0';
  return start;
}


