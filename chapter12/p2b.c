/*
 * Chapter 12: Problem 2-b:
 * Write a program that reads a message then checks whether
 * it's a palyndrome or not. Use pointer arithmetic
 * instead of array subscripting
 */


#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

int main (void) {
  bool palindrome = true;
  char ch=0, m[LEN]={0}, *p, *l, *r;

  printf("Enter a message: ");
  for (p=m; (ch=getchar())!='\n' && p<m+LEN;) {
    if (isalpha(ch)) {
      *p++=tolower(ch);
    }
  }
  
  for(l=m, r=p-1; r>l; r--, l++) {
    if (*r!=*l) {
      palindrome = false;
      break;
    }
  }
  palindrome ? printf("Palindrome\n") : printf("Not a palindrome\n");
  return 0;
}
