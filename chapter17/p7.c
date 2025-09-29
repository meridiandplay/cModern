/*
 * Chpater 17: Program 7:
 * Write a program that captures each user writtent sentence
 * and stores them in an array of vstring struct pointers.
 * Start with 3 elements in the array and allocate memory 
 * dynamically as user enters more sentences.
 * Once the user enters "magic" word the program will
 * print out all the sentencences
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NSEN 3
#define MSG 80


struct vstring {
  int len;
  char sentence[];
};

int main(void) {
  int i=0, j=0, capacity=NSEN, dynlen=0;
  struct vstring **sens =  malloc(capacity * sizeof(*sens));
  char msg_str[MSG+1] = {0};
 
  for(i=0, capacity=NSEN;strcmp(msg_str, "magic")!=0; i++) {
    printf("Enter a sentence: ");
    dynlen = read_line(msg_str, MSG);
    if (i==capacity) {
      // double capacity
      capacity *= 2;
      struct vstring **new = realloc(sens, (capacity*sizeof(*sens)));
      if (new==NULL) {printf("Could not allocate more memory\n"); return 0;}
      sens = new;
      // initialise new slots to NULL
      for (j=i; j<capacity; j++) {
      sens[j] = NULL;
      }
      
    }
    // add a new member
    sens[i] = malloc(sizeof(struct vstring) + dynlen);
    sens[i]->len = dynlen;
    strcpy(sens[i]->sentence, msg_str);
  }
  // free last member because it's the "magic" sentence stored
  free(sens[i-1]);
  sens[i-1]=NULL; 
  for (i=0; (i<capacity)&&(sens[i]!=NULL); i++) {
    printf("Sentence number %d: %s\n", i, sens[i]->sentence);
  }

  return 0;
}
