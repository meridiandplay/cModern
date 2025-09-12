/* 
 * readline.c
 */

#include "readline.h"

int read_line (char str[], int n) {
  int ch=0, i=0;
  while ((ch=getchar())!='\n'&&ch!=EOF) {
    if (i<n) {
      str[i++] = (char)ch;
    }
  }
  str[i]='\0';
  return i;
}
