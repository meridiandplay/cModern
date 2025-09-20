/*
 * Chpater 16: Program 2:
 * Modify inventory.c so that it sorts items in the 
 * database by part number
 */

#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NL 25
#define MP 100

struct part {
  int number;
  char name[NL+1];
  int on_hand;
} inventory[MP];

/* number of parts stored */
int num_parts=0;

int find_part(int number);
void insert(void);
void search(void);
void update(void);
void print(void);

int main (void) {
  char code=0;
  for(;;) {
    printf("Ente operation code: ");
    scanf(" %c", &code);
    /* clear stdin from leftovers */
    while (getchar()!='\n'){;}
    switch (code) {
      case 'i': insert(); break;
      case 's': search(); break;
      case 'u': update(); break;
      case 'p': print(); break;
      case 'q': exit(EXIT_SUCCESS);
      default:  printf("Illegal code\n"); break;
    }
    printf("\n");
  }
}


/***********************************************************************
 * find_part: Looks up a part number in the invetory array and returns 
 *            the array index if the part number is found, otherwise 
 *            returns -1.
 ***********************************************************************/
int find_part (int number) {
  int i=0;
  for (i=0; i<num_parts; i++) {
    if (inventory[i].number==number) {
      return i;
    }
  }
  return -1;
}

/************************************************************************
 * insert: Prompts the user for information about a new part and then
 *         inserts the part into the database. Prints an error message
 *         and returns prematurely if the part already exists or the
 *         database is full.
 ***********************************************************************/
void insert (void) {
  int part_number=0, slot=0, i=0;
  if (num_parts==MP) {
    printf("Database is full; can't add more parts.\n");
    return;
  }
  printf("Enter a part number: ");
  scanf("%d", &part_number);
  if (find_part(part_number)>=0) {
    printf("Part already exists.\n");
    return;
  }
  for (i=0; i<num_parts; i++) {
    if (inventory[i].number>part_number) {
      break;
    }
  }
  slot = i;
  for (i=num_parts; i>slot; i--) {inventory[i] = inventory[i-1];}
  inventory[slot].number = part_number;
  printf("Enter part name: ");
  read_line(inventory[slot].name, NL);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[slot].on_hand);
  num_parts++;
}

/************************************************************************
 * search: Prompts the user to enter a part number, then looks it 
 *         up the part in the database, if the part exists, prints 
 *         the name and quantity on hand, if not, prints an error 
 *         message.
 ***********************************************************************/
void search (void) {
  int i=0, number=0;
  printf("Enter part number: ");
  scanf("%d", &number);
  i=find_part(number);
  if (i>=0) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
  } else {
    printf("Part not found.\n");
  }
}

/***********************************************************************
 * update: Prompts the user to enter a part number. Prints an error
 *         message if the part doesn't exists, otherwise, prompts the 
 *         user to enter change in quantity on hand and updates the 
 *         database.
 ***********************************************************************/
void update (void) {
  int i=0, number=0, change=0;
  printf("Enter part number: ");
  scanf("%d", &number);
  i=find_part(number);
  if (i>=0) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand += change;
  } else {
    printf("Part not found.\n");
  }
}

/************************************************************************
 * printf: Prints a listing of all parts in the database, showing the 
 *         part number, part name, and quantity on hand. Parts are 
 *         printed in the order in which they were entered into the 
 *         database.
 ***********************************************************************/
void print (void) {
  int i=0;
  printf("Part Number\t\tPart Name\t\tQuantity on Hand\n");
  for(i=0;i<num_parts; i++) {
    printf("%11d\t\t%s\t\t%16d\n", inventory[i].number, inventory[i].name,
		    inventory[i].on_hand);
  }
}
