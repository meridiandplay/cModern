/*
 * Chapter 9: Exercise 15:
 * Rewrite the median function so that it has just one return statement
 *
 */

#include <stdio.h>

double median (double x, double y, double z);

int main (void) {
  double x=1.0, y=2.0, z=3.0;
  printf("The median of %lf %lf %lf is: %lf\n", x, y, z, median(x, y, z));
  return 0;
}

double median (double x, double y, double z) {
  double m=0.0;
  if((x<=y && x>=z) || (x>=y && x<=z)) {
    m=x;
  } else if ((y>=x && y<=z) || (y<=x && y>=z)) {
    m=y;
  } else {
    m=z;
  }
  return m;
}
