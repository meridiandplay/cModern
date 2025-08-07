/*
 * Chapter 10: Problem 1:
 * Modify the stack example of section 10.2 to store characters and
 * check if the user input is an input of parentheses and/or braces
 * nested properly
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define STACK_SIZE 100

char contents[STACK_SIZE] = {0};
int top = 0;

void stack_overflow (void);
void stack_underflow (void);
void make_empty (void);
bool is_empty (void);
bool is_full (void);
void push (char c);
char pop (void);

int main (void) {
  bool correct=true;
  char l=0, ch=0;
  make_empty();
  printf("Enter parentheses and/or braces: ");
  while ((ch=getchar()) != '\n') {
    if (ch=='('||ch=='{') {
      push(ch);
    } else if (ch==')'||ch=='}') {
      l = pop();
      if ((ch==')'&&l=='(') || (ch=='}'&&l=='{')){
        continue;
      } else {
        correct=false;
	break;
      }
    } else {
      continue;
    }
  }
  if ((is_empty()) && correct) {
    printf("Parentheses/braces are nested properly\n");
  } else {
    printf("Parentheses/braces are not nested properly\n");
  }
  return 0;
}

void stack_overflow (void) {
  printf("Error: Stack Overflow\n");
  exit(EXIT_FAILURE);
}

void stack_underflow (void) {
  printf("Error: Stack Underflow\n");
  exit(EXIT_FAILURE);
}

void make_empty (void) {
  top=0;
}

bool is_empty (void) {
  return top==0;
}

bool is_full (void) {
  return top == STACK_SIZE;
}

void push (char c) {
  if (is_full()) {
    stack_overflow();
  } else {
    contents[top++] = c;
  }
}

char pop (void) {
  if (is_empty()) {
    stack_underflow();
    return 0; // Not getting here
  } else {
    return contents[--top];
  }
}
