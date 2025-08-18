/*
 * Chapter 12: Problem 2-a:
 * Write a program that reads a message then checks whether
 * it's a palyndrome or not
 */


#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define LEN 100

int main (void) {
  bool palindrome = true;
  char ch=0, m[LEN]={0};
  int i=0, l=0, r=0;

  printf("Enter a message: ");
  while ((ch=getchar())!='\n' && i<LEN) {
    if(isalpha(ch)) {
      m[i++]=tolower(ch);
    }   
  }
  for(l=0, r=i-1; r>l; r--, l++) {
    if (m[r]!=m[l]) {
      palindrome = false;
      break;
    }
  }
  palindrome ? printf("Palindrome\n") : printf("Not a palindrome\n");
  return 0;
}
