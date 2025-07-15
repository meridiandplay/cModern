/*
 * Chapter 7: Program 12:
 * Write a program that evaluates an expressin
 *
 */

#include <stdio.h>

float evaluate (float ff1, float ff2, char op) {
  float rs=0.0f;
  switch(op) {
    case '+':
      rs=ff1+ff2;
      break;
    case '-':
      rs=ff1-ff2;
      break;
    case '*':
      rs=ff1*ff2;
      break;
    case '/':
      rs=ff1/ff2;
      break;
  }
  return rs;
}

int main (void) {
  
  /* Declare variables */
  float f1=0.0f, f2=0.0f, f3=0.0f, r=0.0f;
  char o1=' ', o2=' ';

  /* Ask user for the input */
  printf("Enter an expression: ");
  scanf("%f%c%f%c%f", &f1, &o1, &f2, &o2, &f3);
  
  /* Evaluate the operands and operators */
  r = evaluate(f1,f2,o1);
  /* Evaluate again for last operator and print result */
  printf("Value of the expression: %f\n", evaluate(r,f3,o2));

  return 0;
}
