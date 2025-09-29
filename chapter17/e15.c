/* 
 * Chpater 17: Exercise 15:
 * Show the output of the following program and explain what it does
 * Calls f2 passing it n from 0 to 3 incremeting n in 1 unit each time
 * when n is equal to 3 f2 returns 0 and we break from the while loop
 * in f1 returning the current value of n that made f2 return 0
 * So the program prints Answer: 3
 *
 * This program shows how to use Pointers to functions
 */

#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main (void) {
  printf("Answer: %d\n", f1(f2));
  return 0;
}

int f1 (int (*f) (int)) {
  int n=0;
  while ((*f)(n)) {n++;}
  return n;
}

int f2 (int i) {
  return i*i+i-12;
}
