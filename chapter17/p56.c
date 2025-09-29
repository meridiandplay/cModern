/*
 * Chapter 17: Program 56:
 * Write a program that sorts a series of words entered by the user
 * Stop reading input when the user enters an empty word.
 * Store each word in an array of pointers to strings
 * After all words have been read sort the array using qsort then
 * print all the words in sorted order.
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

#define WL 20
#define MW 20

char *wlist[MW] = {NULL};
int num_words = 0;

int read_word (char *w, int n);
int cmp_words (const void *p, const void *q);

int main (void) {
  char *w = NULL;
  int i=0;
  for (i=0; (w=malloc(sizeof(char)+WL+1))&& i<MW; i++) {
    printf("Enter a word: ");
    if(read_word(w, WL+1) == 0){break;}
    wlist[i] = w;
  }
  if (w==NULL) {
      printf("Couldn't allocate space for a new word\n");
      exit(EXIT_FAILURE);
  } else if (i==0) {
      printf("No words have been enter\n");
      return 0;      
  }
  num_words=i;
  qsort(wlist, num_words, sizeof(char *), cmp_words);
  printf("In sorted order: ");
  for (i=0; i<num_words; i++) {
    printf("%s ", wlist[i]);
  }
  printf("\n");
  return 0;
}

int read_word (char *str, int n) {
  int ch=0, i=0;
  for (i=0, ch=0; (ch=getchar())!='\n' && ch!=EOF && i<(n-1); i++) {
    str[i] = ch;
  }
  str[i]='\0';
  return i;
}

int cmp_words (const void *p, const void *q) {
  return (strcmp (*(char**)p, *(char**)q));
}

