/*
 * Chapter 7: Program 13:
 * Write a program that calculates the average word length for a sentence
 *
 */

#include <stdio.h>

int main (void) {
  
  int w=0, l=0;
  char ch=' ';
  printf("Enter a sentence: ");
  while ((ch = getchar()) != '\n') {
    if (ch == ' ') {
      /* End of the current word, increment world counter */
      w +=1;
    } else {
      /* Increment total word length counter */
      l += 1;
    }
  }
  /* We got the final word concatenated with '\n' so add 1 top words counter */
  w += 1;
  
  /* Print user the average length */
  printf("Average word length: %.1f\n", ((float) l)/((float) w));
  return 0;
}
