#include <stdio.h>

int main (void) {

  int i = 0, j = 0;
  float x = 0.0f;

  printf("Enter '10.3 5 6'\n");
  scanf("%d%f%d", &i, &x, &j);
  printf("%d, %f, %d\n", i, x, j);

  printf("the 10 goes to i variable and since the next input is '.' and not a ',' the scanf interprets it ");
  printf("as the start of the float variable x so it stores '.3' into the x variable and then the 5 into the j variable\n");

  return 0;

}
