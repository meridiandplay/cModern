/*
 * Chapter 6: Program 9:
 * Rewrite Program 8 of Chapter 2 so that it also ask the user to enter
 * the number of payments and then displays the balance remaining after
 * each of these payments.
 */

/* Monthly loan calculator */
#include <stdio.h>

#define MONTHLY_FACTOR 1200.0f
#define ORDINALS "st","nd","rd","th"

int main (void) {

  int i=0, n_pay=0;
  float c_loan=0.0f, a_rate=0.0f, m_rate=0.0f, m_pay=0.0f;
  char* ord[4] = {ORDINALS};

  printf("Enter amount of loan in $: ");
  scanf("%f",&c_loan);
  printf("Enter annual interest rate: ");
  scanf("%f",&a_rate);
  m_rate = (a_rate / MONTHLY_FACTOR);
  printf("Enter monthly payment: ");
  scanf("%f", &m_pay);
  printf("Enter the number of payments: ");
  scanf("%d", &n_pay);

  for (i=0; i<n_pay; i++) {
    c_loan = c_loan - m_pay + (c_loan * m_rate);
    printf("Balance remaining after the %d payment: %.2f\n", i+1, c_loan);
  }

  return 0;
}
