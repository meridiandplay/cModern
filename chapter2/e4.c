/* Printing undeclared int and float variables */
#include <stdio.h>

int main(void) {
  int a,b,c,d;
  float f,h,i,j;

  printf("Uninitialised integers: %d, %d, %d, %d\n",a,b,c,d);
  printf("Uninitialised floats: %f, %f, %f, %f\n",f,h,i,j);

  return 0;
}
