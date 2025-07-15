#include <stdio.h>

int main (void) {

  int x = 0;

  printf("Polynomial calculator v1.0 f(x) = 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
  printf("Enter an integer number to calculate f(x): ");
  scanf("%d", &x);
  printf("f(x) = %d\n",(3*x*x*x*x*x)+(2*x*x*x*x)-(5*x*x*x)-(x*x)+(7*x)-6);

  return 0;
}
