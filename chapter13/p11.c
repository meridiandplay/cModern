/*
 * Chapter 13: Program 11:
 * Write a program that calculates the average word length for a
 * sentence, the program should include the function double
 * compute_average_word_length (const char *sentence) that returns
 * the average length of the owrds in the string pointed to by
 * sentence array
 *
 */

#include <stdio.h>
#include <ctype.h>

#define SIZE 81

double compute_average_word_length (const char *sentence);

int main (void) {
  
  int i=0;
  char s[SIZE]={0};
  char ch=0;
  printf("Enter a sentence: ");
  /* Get sentence and clean stdin afterwards */
  for(i=0; (ch=getchar())!='\n' && ch!=EOF && i<(SIZE-1); i++) {
    s[i]=ch;
  }
  s[i]='\0';
  while(ch!='\n' && ch!=EOF){ch=getchar();}

  /* Print average word length */
  printf("Average word length: %.1lf\n", compute_average_word_length(s));
  return 0;
}

double compute_average_word_length (const char *sentence) {
  int total_words=0;
  int total_length=0;
  /* Avoid working with empty sentence */
  if(*sentence=='\0') {return 0.0;}
  /* Consume any non alphanumeric characters */
  while(!isalpha(*sentence)){sentence++;}
  /* Start counting */
  while(*sentence!='\0') {
    while(*sentence!=' '&& *sentence!='\0') {
      total_length++;
      sentence++;
    }
    total_words++;
    /* Consume any extra espaces */
    while(*sentence==' '){sentence++;}
  }
  return (((double)total_length)/((double) total_words));
}
