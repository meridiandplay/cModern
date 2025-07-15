/*
 * Chapter 5: Program 11:
 * Write a program that asks the user for a two-digit number then prints the English
 * word for the number.
 *
 */

#include <stdio.h>

int main (void) {

  int inumber=0, th=0, u=0;
  /* Ask user for the input number */
  printf("Enter two-digit number: ");
  scanf("%d", &inumber);

  /* Obtain the two digits */
  th = inumber / 10;
  u = inumber % 10;

  /* First evaluate if number is a valid number */
  if ((inumber < 0) || (th > 9)) {
    printf("That is not a valid number, number must be positive two digit\n");
    return 0;
  }

  /* Evaluate and print the number */
  printf("You entered the number: ");
  if (th != 1) {
    switch (th) {
      case 9:
        printf("ninty "); break;
      case 8:
        printf("eighty "); break;
      case 7:
        printf("seventy "); break;
      case 6:
        printf("sixty "); break;
      case 5:
        printf("fifty "); break;
      case 4:
        printf("fourty "); break;
      case 3:
        printf("thirty "); break;
      case 2:
        printf("twenty "); break;
      case 1: case 0: default:
        /* Do nothing */ break;
    }
    switch (u) {
      case 9:
        printf("nine"); break;
      case 8:
        printf("eight"); break;
      case 7:
        printf("seven"); break;
      case 6:
        printf("six"); break;
      case 5:
        printf("five"); break;
      case 4:
        printf("four"); break;
      case 3:
        printf("three"); break;
      case 2:
        printf("two"); break;
      case 1: 
        printf("one"); break;
      case 0:
	if (th == 0) {
          /* Only print zero if it's single digit */
	  printf("zero");
	}
	break;
      default:
        /* Should not get here */ break;
    }
  } else {
    /* Special case 11-19 */
    switch (inumber) {
      case 19:
        printf("nineteen"); break;
      case 18:
        printf("eighteen"); break;
      case 17:
        printf("seventeen"); break;
      case 16:
        printf("sixteen"); break;
      case 15:
        printf("fifteen"); break;
      case 14:
        printf("fourteen"); break;
      case 13:
        printf("thirteen"); break;
      case 12:
        printf("twelve"); break;
      case 11:
        printf("eleven"); break;
      case 10:
        printf("ten"); break;
      default:
        /* Should not get here */ break;
    }
  }
  /* Whatever we printed, print last escape sequence to jump line and have a clear ouput */
  printf("\n");
  return 0;
}
