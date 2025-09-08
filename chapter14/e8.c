/*
 * Chapter 14: Exercise 8:
 * Write a program that uses a macro that defines a literal string
 * which is described the line and the original file which the macro
 * is invoked
 *
 */

#include <stdio.h>

#define EXPAND(x) #x
#define LINE_FILE(l) "Line " EXPAND(l) " of file "__FILE__

int main (void) {
  char *str = LINE_FILE(__LINE__);
  printf("%s\n", str);
  return 0;
}
