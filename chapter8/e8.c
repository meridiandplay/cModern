/*
 * Chapter 8: Exercise 8:
 * Write a program that delares a two dimensional array named tr
 * that stores one month of hourly temperature readings.
 * Rows should represent days of the month.
 * Columns should represent hours of the day.
 * Assume all months to have 30 days.
 *
 */

#include <stdio.h>

#define ML 30
#define DH 24

int main (void) {

  float tr[30][24] = {0};
  int i=0, j=0;

  /* Print array of temperature readings */
  for (i=0; i<ML; i++) {
    for (j=0; j<DH; j++) {
      printf("%2.2f ", tr[i][j]);
    }
    printf("\n");
  }

  return 0;
}
