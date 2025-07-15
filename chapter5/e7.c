/*
 * Chapter 5: Exercise 7:
 * What does the following statement print if i has the value 17? What
 * does it print if i has the value -17?
 *
 */
#include <stdio.h>

int main (void) {

  int i=0;
  
  /* a) i = 17 */
  i=17;
  printf("%d\n", i >= 0 ? i : -i);
  
  /* b) i = -17 */
  i=-17;
  printf("%d\n", i >= 0 ? i : -i);
  
  return 0;
}
