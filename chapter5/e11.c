/*
 * Chapter 5: Exercise 11:
 * Write a switch statement whose controlling expression is the variable area_code.
 * The values of area_code belong to these Major city names.
 * 229 -> Albany, 
 * 404, 470, 678, 770 -> Atlanta,
 * 478 -> Macon,
 * 706, 762 -> Columbus,
 * 912 -> Savannah,
 * Print the belonging major city name belonging to the user's input area code.
 *
 */

#include <stdio.h>

int main (void) {

  int area_code=0;
  
  /* Ask user for the input */
  printf("Enter area code: ");
  scanf("%d", &area_code);

  /* Evaluate the area code in the switch case and print the belonging city name */
  switch (area_code) {
    case 229:
      printf("Albany\n");
      break;
    case 404: case 470: case 678: case 770:
      printf("Atlanta\n");
      break;
    case 478:
      printf("Macon\n");
      break;
    case 706: case 762:
      printf("Columbus\n");
      break;
    case 912:
      printf("Savannah\n");
      break;
    default:
      printf("Area code not recognised, possible values are 229, 404, 470, 478, 678, 706, 762, 770, 912\n");
      break;
  }

  return 0;
}
