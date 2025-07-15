/* Horner's rule polynomial calculator, fewer multiplications */
#include <stdio.h>

int main (void) {

  int x = 0;

  printf("Polynomial calculator v1.0 f(x) = ((((3x + 2)x - 5)x - 1)x + 7)x - 6\n");
  printf("Enter an integer number to calculate f(x): ");
  scanf("%d", &x);
  printf("f(x) = %d\n",(((((((((3*x)+2)*x)-5)*x)-1)*x)+7)*x)-6);

  return 0;
}
