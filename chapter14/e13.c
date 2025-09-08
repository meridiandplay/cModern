/*
 * Chapter 14: Exercise 13:
 * Show the output after preprocessing of the following program,
 * you may ignore lines appended by stdio.h
 *
 */

#include <stdio.h>

#define N 100

void f(void);

int main (void) 
{
  f();
#ifdef N
#undef N
#endif
  return 0;
}

void f(void)
{
#if defined(N)
  printf("N is %d\n", N);
#else
  printf("N is undefined\n");
#endif
}

