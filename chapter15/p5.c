/*
 * Chapter 15: Program 5:
 * Write a program that evaluates RPN expressions. The operands
 * will be single-digit integers, and the operators are +, -, *,
 * /, and =. The = operator causes the top stack item to be displayed
 * afterward, the stack is cleared and the user is prompted to enter
 * another expression. The process continues until the user enters a
 * character thatis not an operator or operand.
 * This program should have a separate stack.c and stack.h files
 * that will be used as a way to deload this file from managing
 * stack functions therefore making the program more modular
 * as teached in this chatper "Writing Large Programs"
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>
#include "stack.h"

int process_operation (int x, int y, char ch);

int main (void) {
  char ch=0;
  /* Main loop, alphabetic characters ends this loop */
  while (!isalpha(ch)) {
    /* Clear stack */
    make_empty();
    /* Ask user for input loop */
    printf("Enter an RPN expression: ");
    /* Calculation loop */
    for (ch=0; ch != '\n';) {
      scanf("%c", &ch);
      if (isdigit((unsigned char)ch)) {
        push((atoi(&ch)));
      } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ) {
        int y = pop();
	int x = pop();
	push(process_operation(x, y, ch));
      } else if (ch == '=') {
	printf("Value of expression: %d\n", pop());
      } else if (ch == ' ') {
        /* skip spaces */
	continue;
      } else if (isalpha(ch)) {
	/* An alphabetic characters ends has to end both loops so */
	/* Clear stack anyways */ 
      	make_empty();
	/* Exit calculation loop */
        break;
      }
    }
  }
  printf("End of calculator program.\n");

  return 0;
}

int process_operation (int x, int y, char ch) {
  int res=0;
  switch (ch) {
    case '+': res=x+y; break;
    case '-': res=x-y; break;
    case '*': res=x*y; break;
    case '/': res=x/y; break;
    default:  res=0;   break;  
  }
  return res;
}
