/*
 * Chapter 12: Exercise 14-15-16
 * Write a program that initializes a MD array
 * of temperatures, rows being days of week, columns being hours
 * of the day. Then prints the whole array, prints largest temperature 
 * readings for each day and finally prints if any day holds
 * a temperature reading of 32 degrees
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define KEY 32
#define ROWS 7
#define COLS 24

bool search (const int t[ROWS][COLS], int r, int c, int k);
void print_row (const int row[COLS], int c);
int find_largest (const int row[COLS], int c);

int main (void) {
  
  int i=0, j=0;	
  int temperatures[ROWS][COLS] = {0};
  /* Init temperature readings */
  for (i=0; i<ROWS; i++) {
    for (j=0; j<COLS; j++) {
      temperatures[i][j] = i+j;
    }
  }
  /* Init a temperature reading with KEY 32 */
  temperatures[6][15] = KEY;
  
  /* Print whole temperature array one row at a time */
  for (i=0; i<ROWS; i++) {
    print_row(temperatures[i], COLS);
  }
  
  /* Print largest temperature of each day */
  for (i=0; i<ROWS; i++) {
    printf("Day %d:  High Temp: %d\n", i+1, find_largest(temperatures[i], COLS));
  }

  /* Print day and hour of temperature reading KEY */
  search((const int (*)[COLS])temperatures, ROWS, COLS, KEY) ? 
	  printf("There was a temperature reading of %d\n", KEY) : 
	  printf("No temperature reading of %d in whole month\n", KEY);
 return 0;
}

bool search (const int t[ROWS][COLS], int r, int c, int k) {
  const int *p;
  int i=0;
  for (i=0; i<r; i++) {
    for (p=t[i]; p<t[i]+c; p++) {
      if (*p==k) {
        return true;
      }
    }
  }
  return false;
}

void print_row (const int row[COLS], int c) {
  const int *p;
  for (p=row; p<row+c; p++) {
    printf("%2d ", *p);
  }
  printf("\n");
}

int find_largest (const int row[COLS], int c) {
  int largest=0;
  const int *p;
  for (p=row, largest=*p;p<row+c; p++) {
    if (*p>largest) {
      largest=*p;
    }
  }
  return largest;
}
