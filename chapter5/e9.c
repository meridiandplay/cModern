/*
 * Chapter 5: Exercise 9:
 * Are the following if statement equivalent? If not why not?
 *
 */

#include <stdio.h>

int if1 (int s1) {
  if (s1 >= 90)
    return 'A';
  else if (s1 >= 80)
    return 'B';
  else if (s1 >= 70)
    return 'C';
  else if (s1 >= 60)
    return 'D';
  else
    return 'F';
}

int if2 (int s2) {
  if (s2 < 60)
    return 'F';
  else if (s2 < 70)
    return 'D';
  else if (s2 < 80)
    return 'C';
  else if (s2 < 90)
    return 'B';
  else
    return 'A';
}

int main (void) {

  int score=0;
  
  /* a) score = 91 */
  score=91;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* b) score = 90 */
  score=90;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* c) score = 89 */
  score=89;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* d) score = 80 */
  score=80;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* e) score = 79 */
  score=79;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* f) score = 70 */
  score=70;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* g) score = 69 */
  score=69;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* h) score = 60 */
  score=60;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* i) score = 59 */
  score=59;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* j) score = 58 */
  score=58;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* k) score = 100 */
  score=100;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  /* l) score = 0 */
  score=0;
  printf("%s\n", if1(score) == if2(score) ? "true" : "false");

  return 0;
}

