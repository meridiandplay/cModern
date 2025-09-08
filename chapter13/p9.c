/*
 * Chapter 13: Program 9:
 * Write a program that counts the number of vowels (a,e,i,o,u)
 * in a sentence. The program should use the following function
 * int compute_vowel_count (const char *sentence)
 *
 */

#include <stdio.h>

#define WSIZE 31

int compute_vowel_count (const char *sentence);

int main (void) {
  
  int i=0;
  int ch=0;
  char s[WSIZE]={0};
  /* Read input sentence until we encounter \n */
  printf("Enter your sentence: ");
  for(i=0; (ch=getchar())!='\n' && ch != EOF && i<WSIZE-1; i++) {
     s[i]=ch;
  }
  s[i]='\0';
  /* Discard overflow to keep stdin clean */
  if (ch != '\n' && ch != EOF) {
    while ((ch = getchar()) != '\n' && ch != EOF) { }
  }
  /* Output the user total vowel count */
  printf("Your sentence contains %d vowels.\n", compute_vowel_count(s));
  return 0;
}

int compute_vowel_count (const char *sentence) {
  int count=0;
  char ch=0;
  while ((ch=*sentence++)!='\0') {
    if ((ch == 'a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') ||
	(ch == 'A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U')) {
    count++;
    }
  }
  return count;
}
