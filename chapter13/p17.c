/*
 * Chapter 13: Problem 17:
 * Write a program that reads a message then checks whether
 * it's a palyndrome or not. Use pointer arithmetic
 * instead of array subscripting. The program should include
 * the function bool is_palindrome(const char *message) that
 * returns true if the string pointed to by message is a palindrome
 *
 */


#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

bool is_palindrome (const char *message);

int main (void) {

  int ch=0;
  char m[LEN]={0};
  char *p;

  printf("Enter a message: ");
  for (p=m; (ch=getchar())!='\n' && ch!=EOF && p<m+LEN;) {
    if (isalpha(ch)) {
      *p++=tolower(ch);
    }
  }
  *p='\0';

  is_palindrome(m) ? printf("Palindrome\n") : printf("Not a palindrome\n");
  return 0;
}

bool is_palindrome (const char *message) {
  const char *s=message;
  while(*message){message++;}
  --message;
  const char *e=message;
  /* Assume palindrome until proven otherwise */
  bool palindrome=true;
  for(;e>s;e--,s++) {
    if(*e!=*s) {
      palindrome=false;
      break;
    }
  }
  return palindrome;
}
