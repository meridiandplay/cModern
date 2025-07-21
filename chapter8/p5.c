/*
 * Chapter 8: Program 5:
 * Modify interest.c program so that it compounds interest
 * monthly instead of annually. The form of the output
 * shouldn't change, the balance should still be shown
 * at annual intervals.
 *
 */

#include <stdio.h>

#define NUM_RATES       ((int) (sizeof(value)/sizeof(value[0])))
#define INITIAL_BALANCE 100.00F
#define MONTHS          12

int main(void) {
  
  int i=0, low_rate=0, num_years=0, year=0, j=0;
  double value[5]={0};

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);
  printf("\nYears");

  for(i=0; i<NUM_RATES; i++) {
    printf("%6dM%%", low_rate+i);
    value[i] = INITIAL_BALANCE;
  }
  printf("\n");

  for(year=1; year<=num_years; year++) {
    printf("%3d   ", year);
    for(i=0; i<NUM_RATES; i++) {
      for(j=0; j<MONTHS; j++) {
	double monthly_rate = ((double)(low_rate+i)) / 100 / MONTHS;
        value[i] += monthly_rate * value[i];
      }
      printf("%7.2f ", value[i]);
    }
    printf("\n");
  }

  return 0;
}
