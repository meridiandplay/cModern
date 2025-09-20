/*
 * readline.c: Reads input
 */

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int read_line (char str[], int n) {
  int ch=0, i=0;
  while(isspace(ch=getchar())){;}
  for (i=0; ch!='\n' && ch!=EOF && i<n; i++) {
    str[i] = ch;
    ch=getchar();
  }
  str[i]='\0';
  return i;
}
