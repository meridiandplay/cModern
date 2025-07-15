/*
 * Chapter 7: Program 10:
 * Write a program that counts the number of vowels (a,e,i,o,u)
 * in a sentence
 *
 */

#include <stdio.h>

int main (void) {
  
  int count=0;
  char ch=' ';
  /* Read input sentence until we encounter \n */
  printf("Enter a sentence: ");
  while ( (ch = getchar()) != '\n') {
    if ((ch == 'a') || (ch=='e') || (ch=='i') || (ch=='o') || (ch=='u') ||
	(ch == 'A') || (ch=='E') || (ch=='I') || (ch=='O') || (ch=='U')) {
    count += 1;
    } else {;}
  }
  /* Output the user total vowel count */
  printf("Your sentence contains %d vowels.\n", count);
  return 0;
}
