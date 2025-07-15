#include <stdio.h>

int main (void) {

  int i = 0;
  float x = 0.0f, y = 0.0f;

  printf("Enter '12.3 45.6 789'\n");
  scanf("%f%d%f", &x, &i, &y);
  printf("%f, %d, %f\n", x, i, y);

  printf("The '12.3' goes to 'x' variable, the '45' goes to 'i' variable and since next input char is '.' and not a ',' ");
  printf("the scanf interprets it as the start of the float variable 'y' so it stores '.6' into the y variable and ");
  printf("then encounters the white char so it interprets it as if the '0.6' variable ended, since there are no more variables ");
  printf("the '789' is left unread\n");

  return 0;

}
