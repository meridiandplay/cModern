/*
 * Chapter 13: Program 14:
 * Write a program that tests whether two words are anagrams.
 * The program must include function bool are_anagrams
 * that returns true if the strings pointed by two parameters
 * word1 and word2 are anagrams
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define SIZE 80
#define ALPH 26

bool are_anagrams (const char *word1, const char *word2);

int main (void) {

  int i=0;
  int ch=0;
  char w1[SIZE]= {0}, w2[SIZE]={0};
  
  /* Get first word */
  printf("Enter first word: ");
  for (i=0; (ch=getchar())!='\n' && ch!=EOF && i<SIZE-1; i++) {
    if(isalpha(ch)) {
     /* It is a letter transform to lower case */
     w1[i] = tolower(ch);
    }
  }
  w1[i] ='\0';
  
  /* Consume what's left in stdin in case word has more
   * than SIZE-1 characters */
  if (i==(SIZE-1)) {while ((ch=getchar()!='\n' && ch!=EOF)){;}}

  /* Get second word */
  printf("Enter first word: ");
  for (i=0; (ch=getchar())!='\n' && ch!=EOF && i<SIZE-1; i++) {
    if(isalpha(ch)) {
     /* It is a letter transform to lower case */
     w2[i] = tolower(ch);
    }
  }
  w2[i] ='\0';

  /* Consume what's left in stdin in case word has more
   * than SIZE-1 characters */
  if (i==(SIZE-1)) {while ((ch=getchar()!='\n' && ch!=EOF)){;}}

  printf("The words are ");
  printf("%s\n", are_anagrams(w1, w2) ? "anagrams." : "not anagrams.");

  return 0;
}

bool are_anagrams (const char *word1, const char *word2) {
  
  // Assume anagram until proven otherwise
  bool anagram = true;
  int abc[ALPH] = {0};
  int i=0;
  while(*word1!='\0') {
    abc[(*word1)-'a']++;
    word1++;
  }
  while(*word2!='\0') {
    abc[(*word2)-'a']--;
    word2++;
  }
  for (i=0; i<ALPH; i++) {
    if(abc[i]) {
      anagram = false;
      break;
    }
  }
  return anagram;
}
