/*
 * Chapter 5: Program 2:
 * Write a program that asks thge user for a 24-hour time,
 * then displays the time in 12-hour form.
 *
 */

#include <stdio.h>

int main (void) {

  int h=0, m=0;
  
  /* Get the 24 hour time */
  printf("Enter a 24-hour time: ");
  scanf("%d:%d", &h, &m);
  if (((h<=23) && (h>=0)) && ((m>=0) && (m<=59))) {
    /* Evaluate and print the equivalent 12-hour time */
    printf("Equivalent 12-hour time: ");
    switch (h) {
      case 0: case 1: case 2: case 3: case 4: case 5: case 6: case 7: case 8: case 9: case 10: case 11: case 12:
        printf("%.2d:%.2d AM\n", h, m);
        break;
      case 13: case 14: case 15: case 16: case 17: case 18: case 19: case 20: case 21: case 22: case 23:
        printf("%.2d:%.2d PM\n", h-12, m);
        break;
      default:
        printf("Incorrect time\n");
        break;
    }
  } else {
    printf("Incorrect time, hours should be between 0 and 23 (included) and minutes should be between 0 and 59 (included)\n");

  }

  return 0;
}
