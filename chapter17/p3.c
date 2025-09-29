/*
 * Chpater 17: Program 3:
 * Modify inventory.c so by adding an erase command that allows
 * the user to remove a part of the database
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "readline.h"

#define NL 25
#define MP 3

struct part {
  int number;
  char name[NL+1];
  int on_hand;
  float unit_price;
};

/* number of parts stored, max_parts allowed in the array 
 * and global pointer to our array struct */
int num_parts=0;
int max_parts=MP;
struct part *inventory = NULL;

int find_part(int number);
void insert(void);
void erase(void);
void search(void);
void update_stock(void);
void update_price(void);
void print(void);

int main (void) {
  inventory = malloc ((sizeof(struct part) * MP));
  if (inventory == NULL) {
    printf("Can't allocate memory for inventory database \n");
  }
  char code=0;
  for(;;) {
    printf("Ente operation code: ");
    scanf(" %c", &code);
    /* clear stdin from leftovers */
    while (getchar()!='\n'){;}
    switch (code) {
      case 'i': insert(); break;
      case 'e': erase(); break;
      case 's': search(); break;
      case 'u': update_stock(); break;
      case 'c': update_price(); break;
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
  if (num_parts==max_parts) {
    inventory = realloc(inventory,((max_parts+MP) * (sizeof(struct part))));
    if (inventory == NULL) {
    printf("Can't reallocate the inventory to increase it\n");
    return;
    }
    max_parts += MP;
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
  printf("Enter unit price in $: ");
  scanf("%f", &inventory[slot].unit_price);
  num_parts++;
}

void erase (void) {
  int part_number=0, i=0;
  printf("Enter a part number: ");
  scanf("%d", &part_number);
  i=find_part(part_number);
  if (i==-1) {
    printf("Part does not exists.\n");
    return;
  }
  if (i<(num_parts-1)) {
    memmove(&inventory[i], &inventory[i+1], ((num_parts-i-1)*sizeof(*inventory)));
  }
  num_parts--;
  memset(&inventory[num_parts], 0, sizeof(*inventory));

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
    printf("Unit price: %.2f$\n", inventory[i].unit_price);
  } else {
    printf("Part not found.\n");
  }
}

/***********************************************************************
 * update_stock: Prompts the user to enter a part number. Prints an error
 *         message if the part doesn't exists, otherwise, prompts the 
 *         user to enter change in quantity on hand and updates the 
 *         database.
 ***********************************************************************/
void update_stock (void) {
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

/***********************************************************************
 * update_price: Prompts the user to enter a part number. Prints an error
 *         message if the part doesn't exists, otherwise, prompts the 
 *         user to enter new unit price and updates the database.
 ***********************************************************************/
void update_price (void) {
  int i=0, number=0;
  printf("Enter part number: ");
    printf("Database is full; can't add more parts.\n");
  scanf("%d", &number);
  i=find_part(number);
  if (i>=0) {
    printf("Enter new unit price in $: ");
    scanf("%f", &inventory[i].unit_price);
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
  printf("Part Number\t\tPart Name\t\tQuantity on Hand\t\tUnit Price\n");
  for(i=0;i<num_parts; i++) {
    printf("%11d\t\t%s\t\t%16d\t\t%8.2f $\n", inventory[i].number, inventory[i].name,
		    inventory[i].on_hand, inventory[i].unit_price);
  }
}
