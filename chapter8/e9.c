/*
 * Chapter 8: Exercise 9:
 * Write a program that delares a two dimensional array named tr
 * that stores one month of hourly temperature readings.
 * Rows should represent days of the month.
 * Columns should represent hours of the day.
 * Assume all months to have 30 days.
 * Compute and show the average temperature for that month.
 *
 */

#include <stdio.h>

#define ML 30
#define DH 24

int main (void) {

  float t=0.0f, average=0.0f, tr[30][24] = {[0][0]=100.5, [1][1]=200000.9};
  int i=0, j=0;

  /* Print array of temperature readings
  for (i=0; i<ML; i++) {
    for (j=0; j<DH; j++) {
      printf("%2.2f ", tr[i][j]);
    }
    printf("\n");
  }
  */

  /* Compute average temperature readings for that month */
  for (i=0; i<ML; i++) {
    for (j=0; j<DH; j++) {
      t += tr[i][j];
    }
  }
  
  /* Compute and show the average temperature for that month */
  average = t / (ML*DH);
  printf("Average temperature for that month %2.2f\n", average);


  return 0;
}
