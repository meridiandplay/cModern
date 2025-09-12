/*
 * stack.c
 */

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"


#define STACK_SIZE 100

/* external variables */
int rpn[STACK_SIZE]={0};
int top=0;

void stack_overflow (void) {
  printf("Expression is too complex.\n");
  exit(EXIT_FAILURE);
}

void stack_underflow (void) {
  printf("Not enough operands in expression.\n");
  exit(EXIT_FAILURE);
}

void make_empty (void) {
  top=0;
}

bool is_empty (void) {
  return top == 0;
}

bool is_full (void) {
  return top == STACK_SIZE;
}

void push (int i) {
  if (is_full()) {
    stack_overflow();
  } else {
    rpn[top++] = i;
  }
}

int pop (void) {
  if (is_empty()) {
    stack_underflow();
    exit(EXIT_FAILURE);
  } else {
    return rpn[--top];
  }
}
