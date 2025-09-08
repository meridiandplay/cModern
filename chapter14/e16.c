/*
 * Chapter 14: Exercise 16:
 * Assume the following macros are in effect and check
 * what the file looks like after expansion
 *
 */

#include <stdio.h>

#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main (void) {
  printf("Hola pragma\n");
IDENT(foo)
  return 0;
}
