/*
 * Chapter 11: Exercise 7:
 * Write the following function split:Date that will store in *month
 * and *day the belonging month and day of day_of_year within year
 */

#include <stdbool.h>
#include <stdio.h>

#define SIZE 13

static bool is_leap (int year);
void split_date (int day_of_year, int year, int *month, int *day);

int main (void) {
  int dt=0, y=0, m=0, d=0;
  printf("Enter day of the year and year: ");
  scanf(" %d %d", &dt, &y);
  split_date(dt, y, &m, &d);
  printf("Month: %d\n", m);
  printf("Day: %d\n", d);
  return 0;
}

static bool is_leap (int year) {
  if((year%4==0) && (year%100!=0 || year%400==0)) {
    return true;
  } else {
    return false;
  }
}

void split_date (int day_of_year, int year, int *month, int *day) {
  int m=0;
  static const int cum_m[13]={0, 31, 59, 90, 120, 151, 181, 212, 
	  243, 273, 304, 334, 365};
  static const int cum_l[13]={0, 31, 60, 91, 121, 152, 182, 213,
	  244, 274, 305, 335, 366};

  const int *cum = is_leap(year) ? cum_l : cum_m;

  if (day_of_year<1 || day_of_year>cum[12]) {
    *month = 0;
    *day = 0;
    return;
  }

  for (m=1; m<=12 && day_of_year > cum[m]; m++) {;}
  *month = m;
  *day = day_of_year - cum[m-1];
}

