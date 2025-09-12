#include <stdio.h>
#include <string.h>
#include "line.h"

#define LLEN 60

char line[LLEN+1]={0};
int line_len=0;
int num_words=0;

void clear_line (void) {
  line[0]='\0';
  line_len=0;
  num_words=0;
}

void add_word (const char * word) {
  if (num_words>0) {
    line[line_len]=' ';
    line[line_len+1]='\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;
}

int space_remaining (void) {
  return LLEN - line_len;
}

void write_line (void) {
  int extra_spaces=0, spaces_to_insert=0, i=0, j=0;
  extra_spaces = LLEN - line_len;
  for (i=0; i<line_len; i++) {
    if (line[i]!=' ') {
      putchar(line[i]);
    } else {
      spaces_to_insert = extra_spaces/(num_words-1);
      for (j=1; j<=spaces_to_insert+1; j++) {
        putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
  }
  putchar('\n');
}

void flush_line (void) {
  if (line_len>0) {
    puts(line);
  }
}
