/* $ Bills exchanger v1.0 */
#include <stdio.h>

int main (void) {

  int i=0, c_amount=0, c_bills=0;
  const int bills[4] = {20, 10, 5, 1};

  printf("Enter a $ amount: ");
  scanf("%d",&c_amount);

  for (i=0; i<=3; i++) {
    c_bills = c_amount / bills[i];
    c_amount = c_amount - (c_bills * bills[i]);
    printf("$%d bills: %d\n", bills[i], c_bills);
  }

  return 0;
}
