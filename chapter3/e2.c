#include <stdio.h>

int main (void) {

  float f1,f2,f3,f4;

  f1 = 10.345f;
  f2 = 5.789f;
  f3 = 7.345f;
  f4 = 9.789f;

  printf("%-8.1e\n",f1);
  printf("%10.6e\n",f2);
  printf("%-8.3f\n",f3);
  printf("%6.0f\n",f4);

  return 0;
}
