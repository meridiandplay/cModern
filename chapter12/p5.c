/*
 * Chapter 12: Program 5:
 * Write a program that outputs a sentence backwards in word perspective.
 * Use Pointer arithmetic instead of array subscripting.
 *
 */

#include <stdio.h>

#define L 1024

int main (void) {

  /* Init all variables */
  char buffer[L] = {0};
  char tc=0, ch=0, *p;
  int z=0, word_length=0, sentence_size=0;

  /* Ask user for sentence */
  printf("Enter a sentence with terminating character {!,?,.}: ");

  /* Get input sentence and assign it to a buffer */
  for (p=buffer; (ch=getchar())!='\n'; p++) {
    *p = ch;
  }
  /* Obtain sentence size thanks to x counter */
  sentence_size = p-buffer;
  /* Declare VLA sentence to the known size */
  char sentence[sentence_size];
  /* Copy input sentence in buffer to VLA sentence */
  for (z=0, p=sentence; p<sentence+sentence_size; p++, z++) {
    *p = buffer[z];
  }
  /* Get terminating character */
  tc = *(p-1);
  
  /* Print solution */
  printf("Reversal of sentence: ");

   /* Loop through sentence backwards for words to print them */ 
  for (p=sentence+sentence_size-2; p>=sentence; p--) {
    for (word_length=0; (p>=sentence) && (*p != ' '); p--) {
      word_length++;
    }
    /* Print word */ 
    for (z=0; z<word_length; z++) {
      printf("%c", *(p+1+z));
    }
    /* Print spacing characters */
    if (p>sentence) {
      printf(" ");
    }
  }
  
  /* Print terminating character and end line character */
  printf("%c\n", tc);
  
  return 0;
}
