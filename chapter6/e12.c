/*
 * Chapter 6: Exercise 12:
 * Rewrite section 6.4 loop for it to check for prime numbers more efficiently.
 *
 */
#include <stdio.h>

int main (void) {

  int d=0, n=0;
  /* Ask user for number */
  printf("Enter number to check if it's prime: ");
  scanf("%d", &n);
  for (d=2; d*d<=n; d++) {
    if (n%d==0)
      break;
  }
  if (d*d <= n) {
    printf("%d is divisible by %d\n", n, d);
  } else {
    printf("%d is prime\n", n);
  }
  return 0;
}
