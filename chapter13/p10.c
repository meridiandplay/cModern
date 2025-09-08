/*
 * Chapter 13: Program 10:
 * Write a program that takes a first name and last name entered by the
 * user and displays the last name, a comma, and the first initial,
 * followed by a period. The program should include the function
 * void reverse_name (char *name) which will modify the string
 * pointed to by name so that the last name comes first followed by
 * a comma, a space, the first initial and a period. Watchout for the
 * extra spaces in the original string between the words.
 *
 */

#include <stdio.h>

#define SIZE 31

void reverse_name (char *name);

int main(void) {

  int i=0;
  char sentence[SIZE]={0};
  char ch=0;

  printf("Enter first and last name: ");
  /* Skip all extra spaces if there are any at the start */
  while((ch=getchar())==' '){;};
  sentence[i]=ch;
  /* Read user sentence and init array string */
  for(i=1; (ch=getchar())!='\n' && ch != EOF && i<SIZE-1; i++) {
    sentence[i]=ch;
  }
  sentence[i]='\0';
  /* Clean leftovers in stdin if any */
  if (i==(SIZE-1)) {
    while ((ch=getchar())!='\n' && ch != EOF) {;}
  }

  reverse_name(sentence);
  printf("%s\n", sentence);
  return 0;
}

void reverse_name (char *name) {
  char *start = name;
  char initial = *name;
  /* Consume first name */
  while(*name!=' '){name++;}
  /* Consume extra spaces */
  while(*name==' '){name++;}
  /* Consume last name and build reverse using start */
  for(; *name!='\0' && *name!=' '; name++, start++) {
    *start=*name;
  }
  *start++=',';
  *start++=' ';
  *start++=initial;
  /* Terminate string any extra spaces after this won't be consumed ever %s */
  *start='\0';
}
