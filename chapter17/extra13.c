/*
 * Chapter 17: Extra 1.3:
 * Write a program that ask the user to enter how many potatoes
 * then goes to harvest all the potatoes
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define L 1
#define KEY "Harvest Complete!\n"
#define POTATO "🥔"

int main (void) {
  int count=0;
  size_t i=0, npot=L;
  printf("How many potatoes? ");
  if ((scanf("%zu", &npot)!=1)) {
    printf("Invalid number of potatoes.\n");
    exit(EXIT_FAILURE);
  }
  const char **potatoes = malloc(npot*sizeof(*potatoes));
  if (potatoes==NULL) {printf("Couldn't allocate memory.\n"); exit(EXIT_FAILURE);}

  for(i=0; i< npot; i++) {
    potatoes[i] = POTATO;
  }
  printf("\n");
  for (i=0, count=1; i<npot; i++, count++) {
    printf("%s ", potatoes[i]);
    if (count%10==0) {
      printf("\n");
    }
  }
  printf("\n");
  printf(KEY);
  free(potatoes);
  return 0;
}
