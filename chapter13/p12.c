/*
 * Chapter 13: Program 12:
 * Write a program that outputs a sentence backwards in word perspective.
 * Be sure to store the words in a two dimensional array where each row
 * is a word. Assume no more than 30 words and a total length of 20 
 * characters for each word
 *
 */

#include <stdio.h>
#include <ctype.h>

#define ROWS 30
#define COLS 20

int main (void) {

  /* Init all variables */
  char sentence[ROWS][COLS]={0};
  char ch=0;
  char tc=0;
  int i=0, j=0;

  /* Ask user for sentence */
  printf("Enter a sentence with terminating character {!,?,.}: ");
  
  /* Read input peeking at characters to see if he hit \n, then
   * put back peeked character in stdin and use scanf to read words
   * safely */
  for (i=0; (ch=getchar())!='\n' && ch!=EOF && i<ROWS; i++){
    ungetc(ch, stdin); 
    scanf(" %19s", sentence[i]);
  }
  
  /* Consume what's left in stdin */
  while(ch!='\n'&&ch!=EOF){ch=getchar();}
  
  /* Obtain terminating character so move to last word index 
   * because reading loop puts us 1 row over last word we need 
   * to decrement i */
  j=0, i--;
  while(sentence[i][j]) {j++;}
  tc = sentence[i][j-1];
  sentence[i][j-1]='\0';
  /* Write sentence in backwards order word wise */
  while(i){
    printf("%s ", sentence[i--]);
  }
  /* Print last word with terminating character */
  printf("%s%c\n", sentence[0], tc);
  
  return 0;
}
