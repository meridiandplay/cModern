/*
 * Chapter 13: Problem 4:
 * Write a program named reverse.c that echoes its command-line
 * arguments in reverse order.
 *
 */

#include <stdio.h>

int main (int argc, char *argv[]) {

  int i=0;
  for (i=argc-1; i>0; i--) {
    printf("%s ", argv[i]);
  }
  printf("\n");
  return 0;
}
