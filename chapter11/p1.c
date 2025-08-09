/*
 * Chapter 11: Program 1:
 * Modify programming project 7 from Chapter 2 so that it includes
 * a function pay_amount that stores in pointer variables the 
 * amount of bills of each quantity required
 */



#include <stdio.h>

#define SIZE 4

const int bills[SIZE] = {20, 10, 5, 1};


void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones);

int main (void) {

  int c_amount=0, tw=0, ts=0, f=0, o=0;

  printf("Enter a $ amount: ");
  scanf("%d",&c_amount);
  
  pay_amount (c_amount, &tw, &ts, &f, &o);
  printf("%d bills: %d\n", bills[0], tw);
  printf("%d bills: %d\n", bills[1], ts);
  printf("%d bills: %d\n", bills[2], f);
  printf("%d bills: %d\n", bills[3], o);

  return 0;
}

void pay_amount (int dollars, int *twenties, int *tens, int *fives, int *ones) {
  int i=0, c_bills=0;
  int *outs[SIZE] = {twenties, tens, fives, ones};
  for (i=0; i<SIZE; i++) {
    c_bills = dollars / bills[i];
    dollars %= bills[i];
    *outs[i] = c_bills;
  }
}
