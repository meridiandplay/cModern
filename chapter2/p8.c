/* Monthly loan calculator */
#include <stdio.h>

#define MONTHLY_FACTOR 1200.0f
#define ORDINALS "st","nd","rd"

int main (void) {

  int i=0;
  float c_loan=0.0f, a_rate=0.0f, m_rate=0.0f, m_pay=0.0f;
  char* ord[3] = {ORDINALS};

  printf("Enter amount of loan in $: ");
  scanf("%f",&c_loan);
  printf("Enter annual interest rate: ");
  scanf("%f",&a_rate);
  m_rate = (a_rate / MONTHLY_FACTOR);
  printf("Enter monthly payment: ");
  scanf("%f", &m_pay);

  for (i=0; i<3; i++) {
    c_loan = c_loan - m_pay + (c_loan * m_rate);
    printf("Balance remaining after the %d%s payment: %.2f\n", i+1, ord[i], c_loan);
  }

  return 0;
}
