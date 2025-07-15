/*
  Chapter 3: Program 3:
  Enter, process format and display correctly the ISBN Number of a book
*/

#include <stdio.h>

int main (void) {

  // Declare variables  and initialize them.
  int prefix=0, group=0, publisher=0, item=0, check=0;

  // Ask the user to enter the ISBN.
  printf("Enter ISBN: ");
  scanf("%d-%d-%d-%d-%d", &prefix, &group, &publisher, &item, &check);

  // Present the user the information.
  printf("GSI prefix: %d\nGroup identifier: %d\nPublisher code: %d\nItem number: %d\nCheck digit: %d\n", 
		  prefix, group, publisher, item, check);

  return 0;
}
