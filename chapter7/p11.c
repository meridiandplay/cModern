/*
 * Chapter 7: Program 11:
 * Write a program that takes a first name and last name entered by the
 * user and displays the last name, a comma, and the first initial,
 * followed by a period.
 *
 */

#include <stdio.h>

int main(void) {

  char ch=' ', initial=' ';
  printf("Enter first and last name: ");
  
  /* Skip all extra spaces if there are any at the start */
  do {;} while ((ch=getchar()) == ' ');
  
  /* ch containts first non ' ' character therefore it's the initial */
  initial = ch;
  
  /* Skip input until we get to the ' ' character */
  do {;} while ((ch=getchar()) != ' ');
  
  /* Skip all extra spaces if there are any at the start */
  do {;} while ((ch=getchar()) == ' ');
  
  /* ch contains first non ' ' character therefore it's the start of the
   * lastname, we will print it until we get to ' ' or '\n' character */
  do {
    printf("%c", ch);
    ch=getchar();
    if ((ch == ' ') || (ch == '\n')) {break;}
  } while (1);
  /* if we encountered ' ' skip until \n */
  if (ch == ' ') {
  do {;} while ((ch=getchar()) != '\n');
  }
  /* Print ' ' character followed by initial and a period */
  printf(", %c.\n", initial);
  return 0;
}

