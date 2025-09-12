/*
 * Chapter 15: Program 1:
 * Improve justify program of section 15.3 by having write_line
 * alternate between putting the larger gaps at the end of the line
 * and putting them at the beginning of the line
 *
 */

#include <string.h>
#include "line.h"
#include "word.h"

#define MAX 20

int main (void) {
  char word[MAX+2]={0};
  int word_len=0;

  clear_line();
  for(;;) {
    word_len = read_word(word, MAX+1);
    if (word_len==0) {
      flush_line();
      return 0;
    }
    if (word_len>MAX) {
      word[MAX]='*';
    }
    if (word_len+1>space_remaining()) {
      write_line();
      clear_line();
    }
    add_word(word);
  }
}
