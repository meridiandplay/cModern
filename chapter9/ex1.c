/*
 * Chapter 9: Exercise 1:
 * Write a program that computes are of a triangle
 *
 */

#include <stdio.h>

double triangle_area(double base, double height);

double triangle_area(double base, double height) {
  double product=0.0;
  product = base * height;
  return product/2;
}

int main(void) {
  double b=0.0, h=0.0;
  printf("Enter base and height of the triangle: ");
  scanf("%lf %lf", &b, &h);
  printf("Area of the triangle %lf\n", triangle_area(b, h));
  return 0;
}
