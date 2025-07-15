/* Sphere volume calculator */
#include <stdio.h>
#include <math.h>

#ifndef M_PI
#define M_PI (3.14159265358979323846264338327950288f)
#endif /* M_PI */

#define VOLUMEFACTOR (4.0f / 3.0f)

int main (void) {

  float r = 0.0f, volume = 0.0f;

  printf("Sphere volume calculator v1.0\n");
  printf("Enter the radius of the sphere (in meters): ");
  scanf("%f",&r);
  volume = VOLUMEFACTOR * M_PI * r * r * r;
  printf("The volume of a 10 meter radius sphere is: %.6f m³\n", volume);

  return 0;
}
