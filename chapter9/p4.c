/*
 * Chapter 9: Program 4:
 * Write a program that tests whether two words are anagrams
 * Program should include 2 functions, read_word and equal_array
 * read_word will be called twice, one for each word
 * equal_array will be passed two arrays and return true if arrays
 * are equal and false otherwise.
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ALPH 26

void read_word(int counts[ALPH]);
bool equal_arrays(int a1[ALPH], int a2[ALPH]);

void read_word(int counts[ALPH]) {
  int i=0;
  char ch=0, letter=0;
  for (i=0; (ch=getchar()) != '\n'; i++) {
    if(isalpha(ch)) {
      /* It is a letter transform to lower case */
      letter = tolower(ch);
      /* Substract 'a' character to activate letter count in belonging index */
      counts[letter - 'a']++;
    } else {
      /* Not a letter, ignore char */
      ;
    }
  }
}

bool equal_arrays(int a1[ALPH], int a2[ALPH]) {
  int i=0;
  /* Assume anagram until proven otherwise */
  bool anagram = true;
  for (i=0; i<ALPH; i++) {
     if (a1[i] != a2[i]) {
       anagram = false;
       break;
     }
  }
  return anagram ? true : false;
}

int main (void) {

  int word1[ALPH] = {0};
  int word2[ALPH] = {0};

  /* First word */
  printf("Enter first word: ");
  read_word(word1);

  /* Second word */
  printf("Enter second word: ");
  read_word(word2);

  /* Check if words are anagram and print it to the user */
  printf("The words are ");
  printf("%s\n", equal_arrays(word1, word2) ? "anagrams." : "not anagrams.");

  return 0;
}
