/*
 * Chapter 16: Program 6:
 * Write a program that prompts the user to enter two dates and 
 * then indicates which date comes earlier on the calendar. 
 * Each date entered should be stored in a date structure.
 * Incorporate the compare_dates function if you wish.
 *
 */


#include <stdio.h>

struct date {
  int year;
  int month;
  int day;
};

struct date d1, d2;

int compare_dates (struct date d1, struct date d2);

int main (void) {

  int w=0;
  /* Ask user to enter the dates */
  printf("Enter first date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
  printf("Enter second date (mm/dd/yy): ");
  scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);
  
  w = compare_dates(d1, d2);

  if (w==-1) {
     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d1.month, d1.day, d1.year, d2.month, d2.day, d2.year);
  } else if (w==1) {
     printf("%.2d/%.2d/%.2d is earlier than %.2d/%.2d/%.2d\n", d2.month, d2.day, d2.year, d1.month, d1.day, d1.year);
  } else if (w==0) {
      printf("Both dates are equal\n");
  }
  return 0;
}


int compare_dates (struct date d1, struct date d2) {
  /* Compute which one is earlier */
  if (d1.year != d2.year) {
    /* Year decides */
    return (d1.year < d2.year) ? -1 : 1; 
  } else if (d1.month != d2.month) {
    /* Month decides */
    return (d1.month < d2.month) ? -1 : 1; 
  } else if (d1.day != d2.day) {
    /* Day decides */
    return (d1.day < d2.day) ? -1 : 1; 
  }
  return 0;
}

