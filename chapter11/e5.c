/*
 * Chapter 11: Exercise 5:
 * Write a function split_time that given a time in total_seconds
 * since midnight it gives the equivalent time in hr:min:sec
 *
 */

#include <stdio.h>

long s=0;
int hours=0, minutes=0, seconds=0;

void split_time (long total_sec, int *hr, int *min, int *sec);

int main (void) {
  printf("Enter seconds since midnight: ");
  scanf(" %ld", &s);
  split_time(s, &hours, &minutes, &seconds);
  printf("Clock: %02d:%02d:%02d\n", hours, minutes, seconds);
  return 0;
}

void split_time (long total_sec, int *hr, int *min, int *sec) {
  *hr = total_sec / 3600;
  *min = (total_sec % 3600) / 60;
  *sec = ((total_sec % 3600) % 60);
}
