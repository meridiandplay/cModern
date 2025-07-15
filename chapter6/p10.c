/*
 * Chapter 5: Program 9:
 * Write a program that prompts the user to enter two dates and then indicates
 * which date comes earlier on the calendar.
 *
 */

#include <stdio.h>

int main (void) {

  int di=0, d2=99, mi=0, m2=99, yi=0, y2=99;
  /* Inform user of the intructions how to run this program */
  printf("This program will ask you for dates and show the earliest of the dates");
  printf(" when a final 0/0/0 date is entered.\n");
  /* Compute which one is earlier between the two and keep the earlier */
  for (;;) {
    /* Ask the user for a date */
    printf("Enter a date (mm/dd/yy): ");
    scanf("%d/%d/%d", &mi, &di, &yi);
    /* Check if we get out of the loop */
    if ((yi == 0) && (mi == 0) && (di == 0)) {
      /* Get out of the loop */
      break;
    } else {
      if (yi < y2) {  
        y2 = yi; m2 = mi; d2 = di;
      } else if (y2 < yi) {;
      } else if (mi < m2) {
	y2 = yi; m2 = mi; d2 = di;
      } else if (m2 < mi) {;
      } else if (di < d2) {
	y2 = yi; m2 = mi; d2 = di;
      } else if (d2 < di) {;
      } else {;
      }
    }
  }
  printf("%.2d/%.2d/%.2d is the earliest date\n", m2, d2, y2); 
  return 0;
}
