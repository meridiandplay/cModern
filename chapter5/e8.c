/*
 * Chapter 5: Exercise 8:
 * The following if statement is unnecessarily complicated. Simplify
 * it as much as possible (Hint: The entire statement can be replaced by
 * a single assignement)
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main (void) {

  int age=0;
  bool teenager=false;

  printf("Introduce age: ");
  scanf("%d", &age);
  if (!(age < 13) && !(age > 19)) {
    teenager = true;
  } else {
    teenager = false;
  }
  printf("result is: %s \n", teenager ? "teenager" : "not teenager");

  return 0;
}
