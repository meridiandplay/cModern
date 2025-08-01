/*
 * Chapter 9: Exercise 4:
 * Write a function day_of_the_year(month, day, year) that returns
 * the day of the year (an integer between 1 and 366) specified
 * by three arguments
 *
 */

#include <stdio.h>

#define SIZE 12

int day_of_year(int month, int day, int year);

int day_of_year(int month, int day, int year) {
  int i=0, days=0;
  int monthly[SIZE] = {31,28,31,30,31,30,31,31,30,31,30,31};
  for (i=1; i<month; i++) {
    days += monthly[i-1];
  }
  days += day;
  /* Account for leap year */
  if ((year % 4 == 0) && (month > 2)) {
    days++;
  }
  return days;
}

int main(void) {
  int m=0, d=0, y=0;
  printf("Enter date in format \"month day year\": ");
  scanf("%d %d %d", &m, &d, &y);
  printf("Days of the year: %d\n", day_of_year(m, d, y));
  return 0;
}
