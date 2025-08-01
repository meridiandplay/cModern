/*
 * Chapter 9: Problem 8:
 * Write a program that plays a game of craps which
 * is played with two dices.
 * First roll win if 7 or 11, loose if 2, 3 or 12
 * Any other roll is called the point
 * On each subsequent roll, player win if point
 * is rolled and looses if 7 is rolled
 * Game will continue accumulating wins and looses
 * until player decides not to play by entering
 * any other character other than 'Y' or 'y'
 * At the end wins and looses are resumed and
 * game terminates
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DICESIZE 6

bool play_game(void);
int roll_dice (void);

int main (void) {
 int w=0, l=0;
 char c=0;
 bool play=true;
 srand((unsigned) time(NULL));
 while (play) {
   if(play_game()) {
     w++;
     printf("You win!\n");
   } else {
     l++;
     printf("You lose!\n");
   }
   printf("Play again?: ");
   scanf(" %c", &c);
   if ( c!='Y' && c!='y') {
     play = false;
   }
   while ((c=getchar()) != '\n' && c != EOF) {;}
 }
 printf("Wins: %d\t Losses: %d\n", w, l);
 return 0;
}

bool play_game (void) {
  int d=0, p=0;
  d = roll_dice();
  printf("You rolled %d\n", d);
  if ( d==7 || d==11 ) {
    return true;
  } else if ( d==2 || d==3 || d==12) {
    return false;
  } else {
    p = d;
    printf("Your point is: %d\n", p);
  }
  while(true) {
    d = roll_dice();
    if ( d==p ) {
      printf("You rolled: %d\n", d);
      return true;
    } else if ( d==7 ) {
      printf("You rolled: %d\n", d);
      return false;
    } else {
      printf("You rolled %d\n", d);
    }
  }
}

int roll_dice (void) {
  int d1=0, d2=0;
  d1 = (rand() % DICESIZE) + 1;
  d2 = (rand() % DICESIZE) + 1;
  return d1+d2;
}

