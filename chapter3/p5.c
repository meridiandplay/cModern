/*
 * Chapter 3: Program 5:
 * Write a program that asks the user to enter the numbers from 1 to 16 (in any order)
 * and then displays the numbers in a 4 by 4 arrangement, followed by the sums of the
 * rows, columns and diagonals. If the matrix in a 4x4 arrangement is a magic square the
 * program should output 'Magic square!'
 */
#include <stdio.h>
#include <stdbool.h>

#define MATRIX_SIZE 4



bool isMagicSquare (int mat[MATRIX_SIZE][MATRIX_SIZE]) {

  int i=0, j=0, d1=0, d2=0, rS[MATRIX_SIZE]={0,0,0,0}, cS[MATRIX_SIZE]={0,0,0,0};
  // Calculate sum of rows and columns and diagonals
  for (i=0; i < MATRIX_SIZE; i++) {
    d1 += mat[i][i];
    d2 += mat[i][MATRIX_SIZE-1-i];
    for(j=0;j<MATRIX_SIZE;j++) {
      rS[i] += mat[i][j];
      cS[i] += mat[j][i];
      // Print the matrix
      printf("%2d ", mat[i][j]);
    }
      // Jump next row of printing matrix
      printf("\n");
  }

  printf("Row sums: %d %d %d %d\n", rS[0], rS[1], rS[2], rS[3]);
  printf("Column sums: %d %d %d %d\n", cS[0], cS[1], cS[2], cS[3]);
  printf("Diagonal sums: %d %d\n", d1, d2);
  
  for (i = 0; i < MATRIX_SIZE; i++) { 
    if (rS[i] != cS[i] || rS[i] != d1 || d1 != d2) {
      return false;
    }
  }

  return true;
}

int main (void) {
  // Declare and initialise the variables
  int m[4][4] = {{0,0,0,0}, {0,0,0,0}, {0,0,0,0}, {0,0,0,0}};
  // Ask user to enter the numbers of the matrix
  printf("Enter the numbers from 1 to 16 in any order: ");
  // fill the matrix
  scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
		  &m[0][0], &m[0][1], &m[0][2], &m[0][3],
		  &m[1][0], &m[1][1], &m[1][2], &m[1][3],
		  &m[2][0], &m[2][1], &m[2][2], &m[2][3],
		  &m[3][0], &m[3][1], &m[3][2], &m[3][3]);
  // Call magicSquare boolean function and print result
  if ( isMagicSquare(m) ) {
  printf ("Magic square!\n");
  }
  return 0;
}
