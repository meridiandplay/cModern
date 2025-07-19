/*
 * Chapter 8: Program 15:
 * Write a Caesar cipher filter
 *
 */
#include <stdio.h>

#define L    80
#define ALPH 26

int main (void) {
  
  int i=0, shift=0, size=0;
  char ch=0;
  char buffer[L] = {0};
  
  printf("Enter message to be encrypted: ");
  /* Read input sentence */
  for (i=0; (ch=getchar()) != '\n'; i++) {
    buffer[i] = ch;
  }
  size = i;
  printf("Enter shift amount (1-25): ");
  /* Read shift amount */
  scanf("%d", &shift);

  printf("Encrypted message: ");
  /* Loop through sentence cyphering each letter */
  for (i=0; i<size; i++) {
    if ((buffer[i]>=65) && (buffer[i]<=90)) {
      /* Upper case letter */
      printf("%c", ((buffer[i]-'A')+shift) % ALPH + 'A');
    } else if ( (buffer[i]>=97) && (buffer[i]<=122)) {
      /* Lower case letter */
      printf("%c", ((buffer[i]-'a')+shift) % ALPH + 'a');
    } else {
      /* Any other symbol, print it unchanged */
      printf("%c", buffer[i]);
    }
  }
  printf("\n");
  return 0;
}
  
