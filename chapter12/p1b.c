/*
 * Chapter 12: Problem 1-b:
 * Write a program that reads a message, then prints
 * the reversal of the message using pointers for
 * array processing instead of counters.
 *
 */

#include <stdio.h>

#define LEN 100

int main (void) {
  char ch=0, m[LEN]={0};
  char *p;
  printf("Enter a message: ");
  for (p=m; (ch=getchar())!='\n' && p<m+LEN; p++) {
    *p = ch;
  }
  printf("Reversal is: ");
  while (p>=m) {
    printf("%c", *p--);
  }
  printf("\n");
  return 0;
}
