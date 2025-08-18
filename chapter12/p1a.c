/*
 * Chapter 12: Problem 1-a:
 * Write a program that reads a message, then prints
 * the reversal of the message:
 *
 */

#include <stdio.h>

#define LEN 100

int main (void) {
  char ch=0, m[LEN]={0};
  int i=0;
  printf("Enter a message: ");
  for (i=0; (ch=getchar())!='\n' && i<LEN; i++) {
    m[i] = ch;
  }
  printf("Reversal is: ");
  while (i>=0) {
    printf("%c", m[i--]);
  }
  printf("\n");
  return 0;
}
