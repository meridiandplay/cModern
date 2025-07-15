/*
 * Chapter 5: Program 9:
 * Write a program that prompts the user to enter two dates and then indicates
 * which date comes earlier on the calendar.
 *
 */

#include <stdio.h>

int main (void) {

  int d1=0, d2=0, m1=0, m2=0, y1=0, y2=0;
  /* Ask user to enter the dates */
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m1, &d1, &y1);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &m2, &d2, &y2);

  /* Compute which one is earlier */
  if (y1 < y2) {  
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
  } else if (y2 < y1) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1);
  } else if (m1 < m2) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2);
  } else if (m2 < m1) {
    printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1); 
  } else if (d1 < d2) {
     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m1, d1, y1, m2, d2, y2); 
  } else if (d2 < d1) { 
     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", m2, d2, y2, m1, d1, y1); 
  } else {
     printf("Both dates are equal\n");
  }
  return 0;
}
