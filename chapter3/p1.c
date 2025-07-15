/*
  Chapter 3: Program 1
  Write a program that accepts a date from the user in the form mm/dd/yyyy
  and then displays it in the form yyyymmdd.
*/
#include <stdio.h>

int main (void) {
  // Declare year, month, and day variables and initialise them.
  int year=0, month=0, day=0;

  // Ask the user to enter a formated date.
  printf("Enter a date (mm/dd/yyyy): ");
  scanf("%d / %d / %d", &month, &day, &year);

  //Present the user the unformatted date.
  printf("You entered the date %.4d%.2d%.2d\n", year, month, day);

  return 0;
}
