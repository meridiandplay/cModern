#include <stdio.h>

int main (void) {

  int u=0, v=0, w=0, x=0, y=0, z=0;
  float a=1.1f, b=2.2f, c=3.3f, d=4.4f;

  printf("a) Yes, scanf keep reading after reading the white character until it encounters digit\n");
  printf("b) No, the first format can be dishonored by the following input 'x -y -z' while second format supports it\n");
  printf("c) Yes, first and second format store int the same way any input but second format requires extra \n to return\n");
  printf("d) Yes, scanf keep reading after reading the white character after reading ',' until it encounters float\n");
  printf("As a side note any call could be equivalent as the user keeps honoring the format required by any call\n");

  // a)
  //printf("'%%d' vs ' %%d'\n");
  //scanf("%d", &x);
  //scanf(" %d", &y);
  //printf("%d\n", x);
  //printf(" %d\n", y);

  // b)
  //printf("'%%d-%%d-%%d' vs '%%d -%%d -%%d'\n");
  //scanf("%d-%d-%d", &u, &v, &w);
  //scanf("%d -%d -%d", &x, &y, &z);
  //printf("%d-%d-%d\n", u, v, w);
  //printf("%d -%d -%d\n", x, y, z);

  // c)
  //printf("'%%f' vs '%%f '\n");
  //scanf("%f", &a);
  //scanf("%f ", &b);
  //printf("%f\n", a);
  //printf("%f \n", b);

  // d)
  printf("'%%f,%%f' vs '%%f, %%f'\n");
  scanf("%f,%f", &a, &b);
  scanf("%f, %f", &c, &d);
  printf("%f,%f\n", a, b);
  printf("%f, %f\n", c, d);


  return 0;

}
