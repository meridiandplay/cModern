/*
 * Chapter 8: Program 14:
 * Write a program that outputs a sentence backwards in word perspective.
 *
 */

#include <stdio.h>

#define L 1024

int main (void) {

  /* Init all variables */
  char buffer[L] = {0};
  char tc=0, ch=0;
  int z=0, i=0, word_length=0, sentence_size=0;

  /* Ask user for sentence */
  printf("Enter a sentence with terminating character {!,?,.}: ");

  /* Get input sentence and assign it to a buffer */
  for (z=0; (ch=getchar())!='\n'; z++) {
    buffer[z] = ch;
  }
  /* Obtain sentence size thanks to x counter */
  sentence_size = z;
  /* Declare VLA sentence to the known size */
  char sentence[sentence_size];
  /* Copy input sentence in buffer to VLA sentence */
  for (z=0; z<sentence_size; z++) {
    sentence[z] = buffer[z];
  }
  /* Get terminating character */
  tc = sentence[sentence_size-1];
  
  /* Print solution */
  printf("Reversal of sentence: ");

  /* Loop through sentence backwards for words to print them */
  for (i=sentence_size-2; i>=0; i--) {
    for (word_length=0; (i>=0) && (sentence[i] != ' '); i--) {
      word_length++;
    }
    /* Print word */
    for (z=0; z<word_length; z++) {
      printf("%c", sentence[i+1+z]);
    }
    /* Print spacing characters */
    if (i>0) {
      printf(" ");
    }
  }
  /* Print terminating character and end line character */
  printf("%c\n", tc);
  
  return 0;
}
