/*
 * Chapter 13: Program 13:
 * Write a Caesar cipher filter. The program must include the 
 * following function void encrypt (char *message, int shift); 
 * The function expects message to point to a string containing
 * the message to be encrypted; shift represents the amount by 
 * which each letter is about to be shifted.
 *
 */
#include <stdio.h>

#define SIZE 80
#define ALPH 26

void encrypt (char *message, int shift);

int main (void) {
  
  int i=0, sf=0;
  int ch=0;
  char m[SIZE] = {0};
  printf("Enter message to be encrypted: ");
  /* Read input sentence */
  for (i=0; (ch=getchar()) != '\n' && ch!=EOF && i<SIZE-1; i++) {
    m[i] = ch;
  }
  m[i]='\0';


  printf("Enter shift amount (1-25): ");
  /* Read shift amount */
  scanf("%d", &sf);
  
  /* Encrypt message */
  encrypt(m, sf);

  /* Print encrypted message */
  printf("Encrypted message: %s\n", m);
  
  return 0;
}

void encrypt (char *message, int shift) {
  /* Loop through sentence cyphering each letter */
  
  for (; *message!='\0'; message++) {
    if((*message>=65) && (*message<=90)) { // upper case
      *message = ((*message)-'A'+shift) % ALPH + 'A';
    } else if ((*message>=97) && (*message<=122)) { // lower case
       *message = ((*message)-'a'+shift) % ALPH + 'a';
    } else {
       ; // Any other symbol is left unchanged
    }
  }
}
