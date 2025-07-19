/*
 * Chapter 8: Program 16:
 * Write a program that tests whether two words are anagrams
 *
 */
#include <stdio.h>
#include <stdbool.h>
#include <ctype.h>

#define ALPH 26

int main (void) {

  int i=0;
  char ch=0, letter=0;
  int abc[ALPH] = {0};
  /* Assume anagram until proven otherwise */
  bool anagram = true;

  /* Loop through first word and activate abc where needed */
  printf("Enter first word: ");
  for (i=0; (ch=getchar()) != '\n'; i++) {
    if(isalpha(ch)) {
     /* It is a letter transform to lower case */
     letter = tolower(ch);
     /* Substract 'a' character to activate letter count in belonging index */
     abc[letter - 'a']++;
    } else {
      /* Not a letter, ignore char */
      ;
    }
  }

  /* Loop through second word and deactivate abc where needed */
  printf("Enter second word: ");
  for (i=0; (ch=getchar()) != '\n'; i++) {
    if(isalpha(ch)) {
     /* It is a letter transform to lower case */
     letter = tolower(ch);
     /* Substract 'a' character to activate letter count in belonging index */
     abc[letter - 'a']--;
    } else {
      /* Not a letter, ignore char */
      ;
    }
  }

  /* Check if words are anagram */
  for (i=0; i<ALPH; i++) {
     if (abc[i]) {
       anagram = false;
       break;
     }
  }
  printf("The words are ");
  printf("%s\n", anagram ? "anagrams." : "not anagrams.");

  return 0;
}
