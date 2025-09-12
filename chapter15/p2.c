/*
 * Chapter 15: Program 2:
 * Modify justify program of section 15.3 by having the read_word function
 * store the * character at the end of a word that's been truncated.
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
    if (word_len+1>space_remaining()) {
      write_line();
      clear_line();
    }
    add_word(word);
  }
}
