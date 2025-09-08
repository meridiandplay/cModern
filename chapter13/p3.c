/*
 * Chapter 13: Problem 3:
 * Modify the deal.c program of section 8.2 so that it prints the
 * full names of the cards it deals. Replace rank_code and suit_code 
 * by arrays containing pointers to strings.
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main (void) {
  bool in_hand[NUM_SUITS][NUM_RANKS]={0};
  int num_cards=0, rank=0, suit=0;
  const char *rank_code[]={"Two","Three","Four","Five","Six","Seven",
	                  "Eight","Nine","Ten","Jack","Queen","King",
			  "Ace"};
  const char *suit_code[]={"clubs","diamonds","hearts","spades"};

  srand((unsigned) time(NULL));
  
  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);

  printf("Your hand:\n");
  while (num_cards > 0) {
    suit = rand() % NUM_SUITS;
    rank = rand() % NUM_RANKS;
    if (!in_hand[suit][rank]) {
      in_hand[suit][rank]=true;
      num_cards--;
      printf(" %s of %s\n", rank_code[rank], suit_code[suit]);
    }
  }

  return 0;
}
