/*
 * Chapter 5: Program 7:
 * Write a program that finds the largest and smallest of four integers entered by
 * the user ten displays it to the user.
 *
 */

#include <stdio.h>

int main (void) {

  int i1=0, i2=0, i3=0, i4=0;
  int max1=0, min1=0, max2=0, min2=0;

  /* Ask the user for the input */
  printf("Enter four integers: ");
  scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

  /* First pair comparison */
  if (i1 > i2) {
     max1 = i1;
     min1 = i2;
  } else {
     max1 = i2;
     min1 = i1;
  }
  
  /* Second pair comparison */
  if (i3 > i4) {
     max2 = i3;
     min2 = i4;
  } else {
     max2 = i4;
     min2 = i3;
  }
  
  /* Largest pairs comparison in same printf */
  printf("Largest: %d\n", max1 > max2 ? max1 : max2);
  /* Smallest pairs comparison in same printf */
  printf("Smallest: %d\n", min1 < min2 ? min1 : min2);

  return 0;
}
