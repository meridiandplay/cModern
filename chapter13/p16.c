/*
 * Chapter 13: Problem 16:
 * Write a program that reads a message, then prints
 * the reversal of the message using pointers for
 * array processing instead of counters. The program should
 * include the function void reverse (char *message) that 
 * reverses the string pointed by message. Use two pointers
 * one initially pointing to the first character and the other 
 * initally pointing to the last character. Have the function 
 * reverse these characters and then move the pointers toward each 
 * other, repeating the process until the pointers meet.
 *
 */

#include <stdio.h>

#define LEN 100

void reverse (char *message);

int main (void) {
  char ch=0, m[LEN]={0};
  int i=0;

  printf("Enter a message: ");
  for (i=0; (ch=getchar())!='\n' && ch!= EOF && i<LEN-1; i++) {
    m[i] = ch;
  }
  m[i] = '\0';
  reverse(m);
  printf("Reversal is: %s\n", &m[0]);
  return 0;
}

void reverse (char *message) {
  char *start=message;
  while(*message){message++;}
  --message;
  char *end=message;
  for(; start<end; end--, start++) {
    char tmp = *start;
    *start=*end;
    *end=tmp;
  }
}
