/*
 * Chapter 8: Problema 8:
 * Write a program that reads a 5 x 5 array of integers representing five
 * students quiz grades then computes total score and average score
 * for each student and the aerage score, high score and low score
 * for each quiz.
 *
 */

#include <stdio.h>

#define HS   100
#define LS   0
#define NROW 5
#define NCOL 5

int main (void) {
  
  int m[NROW][NCOL] = {0};
  int i=0, j=0, total=0;
  int hs=LS, ls=HS;
  float average=0.0F;
  
  for (i=0; i<NROW; i++) {
    printf("Student %d: ", i+1);
    scanf("%d %d %d %d %d", &m[i][0], &m[i][1], &m[i][2], &m[i][3], &m[i][4]);
  }
  
  for (i=0; i<NROW; i++) {
    for(j=0; j<NCOL; j++) {
      total += m[i][j];
      }
    average = ((float)total)/NCOL;
    printf("Student %d (total, average): %d %.2f \n", i+1, total, average);
    total=0;
    average=0.0f;
  }


  for (j=0; j<NROW; j++) {
    for(i=0; i<NCOL; i++) {
      total += m[i][j];
      if (m[i][j]>hs) {
        hs = m[i][j];
      }
      if (m[i][j]<ls) {
        ls = m[i][j];
      }
    }
    average = ((float)total)/NCOL;
    printf("Quiz %d (average, highscore, lowscore): %.2f %d %d \n", j+1, average, hs, ls);
    total=0;
    hs=LS;
    ls=HS;
  }

  return 0;
}
