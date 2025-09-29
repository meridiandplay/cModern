/*
 * Chapter 17: Exercise 19:
 * Write a function that when given a string as its argument
 * searchers for the following array of structures for a matching 
 * command name then calls the function associated with that name
 *
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <stdlib.h>

#define IL 30

void hello_cmd (void);
void how_cmd (void);
void why_cmd (void);
void when_cmd (void);
void who_cmd (void);
void execute (char *s);

struct {
  char *cmd_name;
  void (*cmd_fp) (void);
} file_cmd [] = {{"hello?", hello_cmd},
	         {"how?",   how_cmd},
		 {"why?",   why_cmd},
		 {"when?",  when_cmd},
		 {"who?",   who_cmd}};

void hello_cmd (void) {
  printf("Hello!\n");
}

void how_cmd (void) {
  printf("By using pointers to functions :)\n");
}

void why_cmd (void) {
  printf("To understand Chapter 17\n");
}

void when_cmd (void) {
  printf("%s\n", __DATE__);
}

void who_cmd (void) {
  printf("Sanchez Sanabria JM\n");
}

void execute (char *s) {
  int i=0;
  bool found=false;
  for (i=0; i<((int)((sizeof(file_cmd))/((sizeof(file_cmd[0]))))); i++) {
    if ((strcmp(s, file_cmd[i].cmd_name))==0) {
      found = true;
      break;
    }
  }
  if (found) {file_cmd[i].cmd_fp();}
}

int main (void) {
  char *input = (char *) malloc(IL+1);
  printf("Welcome to chatbot v1.0\n");
  printf("Ask for hello, how, why, when or who, q to quit\n");
  for(;;) {
    scanf("%s", input);
    if (*input=='q') { break; }
    execute(input);
  }
  printf("Bye!\n");
  return 0;
}


