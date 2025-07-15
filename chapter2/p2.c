#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846264338327950288f)
#endif /* M_PI */

#define VOLUMEFACTOR (4.0f / 3.0f)

int main (void) {

  int r = 10;
  float volume = VOLUMEFACTOR * M_PI * r * r * r;
  printf("The volume of a 10 meter radius sphere is: %.6f m³\n",volume);
  return 0;
}
