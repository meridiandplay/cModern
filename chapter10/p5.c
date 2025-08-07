/*
 * Chapter 10: Problem 5:
 * Modify poker.c program of Section 10.5 by allowing and additional 
 * category "ace-low" straights (ace, two, three, four, five)
 *
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>


#define NUM_RANKS 13
#define NUM_CARDS 5
#define HAND_COL  2
#define RANK      0
#define SUIT      1

/* external variables */
int hand[NUM_CARDS][HAND_COL]={0};
bool royal_flush, straight, ace_low, flush, four, three;
int pairs; /* can be 0, 1, or 2 */

/* prototypes */
bool duplicate (int rank, int suit);
void sort_hand_by_rank (void);
void read_cards (void);
void analyze_hand (void);
void print_result (void);

/*
 * main: Calls read_cards, analyze_hand and print_result repeatedly
 */
int main (void) {
  for (;;) {
    read_cards();
    analyze_hand();
    print_result();
  }
  return 0;
}

/*
 * sort_hand_by_rank: Sort hand array by rank number in lower to
 * higher order
 */
void sort_hand_by_rank (void) {
  int pass=0, card=0, rank=0, suit=0;
  for (pass=1; pass<NUM_CARDS; pass++) {
    for(card=0; card<NUM_CARDS - pass; card++) {
      rank = hand[card][RANK];
      suit = hand[card][SUIT];
      if (hand[card+1][RANK]<rank) {
        hand[card][RANK] = hand[card+1][RANK];
	hand[card][SUIT] = hand[card+1][SUIT];
	hand[card+1][RANK] = rank;
	hand[card+1][SUIT] = suit;
      }
    }
  }
}

/*
 * duplicate: Check if card is already in hand, if so returns true
 * meaning the current input card is a duplicate, if the current
 * card is not in the hand therefore returns false
 */
bool duplicate (int rank, int suit) {
  int i=0;
  for(i=0; i<NUM_CARDS; i++)  {
    if (hand[i][RANK] == rank && hand[i][SUIT] == suit) {
      return true;
    }
  }
  return false;
}

/*
 * read_cards: Reads the cards into the variables num_in_rank and
 * num_in_suits; checks for bad cards and duplicate cards
 */
void read_cards (void) {
  char ch=0, rank_ch=0, suit_ch=0;
  int i=0, j=0, rank=0, suit=0;
  bool bad_card=false;
  int cards_read=0;

  for (i=0; i<NUM_CARDS; i++) {
    for (j=0; j<HAND_COL; j++) {
      hand[i][j] = 0;
    }
  }
  
  while (cards_read<NUM_CARDS) {
    bad_card=false;
    printf("Enter a card: ");
    rank_ch = getchar();
    switch (rank_ch) {
      case '0': exit(EXIT_SUCCESS); break;
      case '2': rank=0; break;
      case '3': rank=1; break;
      case '4': rank=2; break;
      case '5': rank=3; break;
      case '6': rank=4; break;
      case '7': rank=5; break;
      case '8': rank=6; break;
      case '9': rank=7; break;
      case 't': case 'T': rank=8; break;
      case 'j': case 'J': rank=9; break;
      case 'q': case 'Q': rank=10; break;
      case 'k': case 'K': rank=11; break;
      case 'a': case 'A': rank=12; break;
      default: bad_card=true; break;
    }
    suit_ch = getchar();
    switch (suit_ch) {
      case 'c': case 'C': suit=0; break;
      case 'd': case 'D': suit=1; break;
      case 'h': case 'H': suit=2; break;
      case 's': case 'S': suit=3; break;
      default: bad_card=true; break;
    }
    while ((ch=getchar())!='\n') {
      if (ch!=' ') {
        bad_card=true;
      }
    }
    if (bad_card) {
      printf("Bad card; Ignored.\n");
    } else if (duplicate(rank, suit)) {
      printf("Duplicate card; ignored.\n");
    } else {
      /* valid card, to hand array */
      hand[cards_read][RANK] = rank;
      hand[cards_read][SUIT] = suit;
      cards_read++;
    }
  }
}

/*
 * analyze_hand: Determine whether the hand contains a straight, a flush
 * four-of-a-kind, and/or three-of-a-kind; determines the number of
 * pairs; stores the results into the external variables straight,
 * flush, four, and pairs
 */
void analyze_hand (void) {
  int rank_times[NUM_RANKS]={0};
  int i=0, rank=0;
  royal_flush=false;
  straight=true;
  ace_low=false;
  flush=true;
  four=false;
  three=false;
  pairs=0;
  
  /* sort hand by rank */
  sort_hand_by_rank();

  /* check for flush start assuming flush if differ assign no flush*/
  for (i=1; i<NUM_CARDS; i++) {
    if(hand[i][SUIT] != hand[i-1][SUIT]) {
      flush=false;
      break;
    }
  }
  
  /* check for royal flush, if we are in flush case */
  if (flush && hand[0][RANK] == 8 &&
	       hand[1][RANK] == 9 &&
               hand[2][RANK] == 10 &&
               hand[3][RANK] == 11 &&
               hand[4][RANK] == 12) {
    flush=false;
    royal_flush=true;
  }	  

  /* check for straight */
  for (i=1; i<NUM_CARDS; i++) {
    if (hand[i][RANK]-hand[i-1][RANK] != 1) {
      straight=false;
      break;
    }
  }

  /* check for specific case of ace-low */
  if (hand[0][RANK] == 0 &&
		  hand[1][RANK] == 1 &&
		  hand[2][RANK] == 2 &&
		  hand[3][RANK] == 3 &&
		  hand[4][RANK] == 12) {
    ace_low=true;
    straight=false;
  }

  /* check for 4-of-a-kind, 3-of-a-kind, and pairs, first we will rank_times */
  for (i=0; i<NUM_CARDS; i++) {
    rank_times[hand[i][RANK]]++;
  }
  /* then we loop rank_times searching for 4-of-a-kind, 3-of-a-kind, and pairs */
  for (rank=0; rank<NUM_RANKS; rank++) {
    if (rank_times[rank]==4) four=true;
    if (rank_times[rank]==3) three=true;
    if (rank_times[rank]==2) pairs++;
  }
}


/*
 * print_result: Prints the classification of the hand based on the
 * values of the external variables, straight, flush, four, three
 * and pairs
 */
void print_result (void) {
  if (royal_flush) printf("Royal flush");
  else if (straight&&flush) printf("Straight flush");
  else if (ace_low&&flush) printf("Steel wheel");
  else if (four)       printf("Four of a kind");
  else if (three&&(pairs==1))       printf("Full house");
  else if (flush)      printf("Flush");
  else if (straight)   printf("Straight");
  else if (ace_low)    printf("Ace-Low");
  else if (three)      printf("Three of a kind");
  else if (pairs==2)   printf("Two pairs");
  else if (pairs==1)   printf("Pair");
  else                 printf("High card");
  printf("\n\n");
}
