/*
 * Chapter 13: Exercise 6:
 * Write a function named censor that modifies a string by replacing
 * every ocurrence of foo by xxx. Make the function as short as
 * possible without sacrificing clarity.
 *
 */

#include <stdio.h>
#include <string.h>

#define MAXM 80
#define BADW "foo"
#define CENS "xxx"
#define PLEN  4

void censor (char *s, char *p, char *r);
void censor2 (char *s, char *p, char *r);

int main (void) {
  int i=0;
  char ch=0, m[MAXM] = {0};
  printf("Enter a message to censor it: ");
  for (i=0;(ch=getchar())!='\n';) {
    m[i++]=ch;
  }
  m[i]='\0';
  censor2(m, BADW, CENS);
  printf("%s\n", m);
  return 0;
}

void censor (char *s, char *p, char *r) {
  char a[PLEN] = {0};
  while(*s!='\0') {
    strncpy(a, s, sizeof(a)-1);
    a[sizeof(a)-1] = '\0';
    if (strcmp(p, a)==0) {
      strncpy(s, r, strlen(r));
      s += 3;
    }
    s++;
  }
}

void censor2 (char *s, char *p, char *r) {
  while (*s!='\0') {
    if ( (*s==*p) && (*(s+1)==*(p+1)) && (*(s+2)==*(p+2)) ) {
      *s=*r;
      *(s+1)=*(r+1);
      *(s+2)=*(r+2);
      s+=3;
    } else {
      s++;
    }
  }
}
