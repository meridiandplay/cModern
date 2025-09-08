/*
 * Chapter 13: Program 15:
 * Write a program that evaluates RPN expressions. The operands
 * will be single-digit integers, and the operators are +, -, *,
 * /, and =. The = operator causes the top stack item to be displayed
 * afterward, the stack is cleared and the user is prompted to enter
 * another expression. The process continues until the user enters a
 * character thatis not an operator or operand. The program must
 * include function int evaluate_RPN_expression (const char *expression)
 * that returns the RPN expression pointed to by expression
 *
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdlib.h>
#include <stdio.h>

#define STACK_SIZE 100


/* external variables */
int rpn[STACK_SIZE]={0};
int top=0;

void stack_overflow (void);
void stack_underflow (void);
void make_empty (void);
bool is_empty (void);
bool is_full (void);
void push (int i);
int pop (void);
int process_operation (int x, int y, char ch);

int evaluate_RPN_expression (const char *expression);


int main (void) {
  char exp[STACK_SIZE]={0};
  int ch=0, i=0;
  

  while (!isalpha(ch)) { 
    /* Ask user for input loop */
    printf("Enter an RPN expression: ");
    for (i=0; (ch=getchar())!='\n' && ch!=EOF && (!isalpha(ch)) && i<STACK_SIZE-1; i++) {
      exp[i]=ch;
    }
    exp[i]='\0';
    if(!isalpha(ch)) {
      printf("Value of expression: %d\n", evaluate_RPN_expression(exp));
    }
  }
  printf("End of calculator program.\n");
  return 0;
}

int evaluate_RPN_expression (const char *expression) {
  char ch=0;
  /* Clear stack */
  make_empty();
  while((ch=*expression++)) {
    if (isdigit((unsigned char)ch)) {
      push((atoi((const char*)&ch)));
    } else if (ch == '+' || ch == '-' || ch == '*' || ch == '/' ) {
      int y = pop();
      int x = pop();
      push(process_operation(x, y, ch));
    } else if (ch == '=') {
      return pop();
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

