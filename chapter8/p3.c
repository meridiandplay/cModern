/*
 * Chapter 8: Program 3:
 * Modify repdigit.c so that the user can enter more than one number
 * to be tested for repeated digits. The program should terminate
 * when the user enters a numbe that's less than or equal to 0.
 *
 */

#include <stdio.h>
#include <stdbool.h>

#define ND 10

int main (void) {

  bool nod=true;
  int ds[ND]={0};
  int d=0, i=0;
  long n=1;

  do {
    /* Re-Initialize variables */
    n=1, d=0, i=0;
    for (i=0; i<ND; i++) {
      ds[i]=0;
    }
    nod=true;
    
    printf("Enter a number (0 to terminate): ");
    scanf("%ld", &n);
    if (n<=0) {
      break;
    }
    while (n>0) {
      d = n % 10;
      ds[d]++;
      n /= 10;
    }

    printf("Repeated digit: ");
    for (i=0; i<ND; i++) {
      if(ds[i]>1) {
        printf("%d ", i);
        nod = false;
      }
    }
    if(nod) {
      printf("No digits were repeated.\n");
    } else {
      printf("\n");
    }
  } while(1);
  
  return 0;
}
