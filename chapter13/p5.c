/*
 * Chapter 13: Program 5:
 * Write a program that adds up its command line arguments which are
 * assumed to be integers. Use atoi function to convert each command
 * line argument from strings form to integer form.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[]) {
  int i=0;
  int sum=0;
  for(sum=0, i=1; i<argc; i++) {
    sum += atoi(argv[i]);
  }
  printf("Total: %d\n", sum);
  return 0;
}
