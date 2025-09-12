/*
 * Chpater 15: Program 4:
 * Modify remind.c program of Section 13.5 so that the read_line
 * function is in a separate file named readline.c Create a header
 * file named readline.h that constains a prototype for the function
 * and have both remind.c and readline.c include this file
 */

#include <stdio.h>
#include <string.h>
#include "readline.h"

#define MAX_REMIND 50
#define MSG_LEN 60

int main(void) {
  // +9 for "mm dd hh " (2 + 1 + 2 + 1 + 2 + 1)
  char reminders[MAX_REMIND][MSG_LEN + 10] = {0};
  char month_str[3] = {0};
  char day_str[3] = {0};
  char hour_str[3] = {0};
  char msg_str[MSG_LEN + 1] = {0};
  int month=0, day = 0, hour = 0, i = 0, j = 0, num_remind = 0;

  for (;;) {
    if (num_remind == MAX_REMIND) {
      printf("-- No space left --\n");
      break;
    }

    printf("Enter month, day, 24h time and reminder: ");
    if (scanf("%2d %2d %2d", &month, &day, &hour) != 3) {
      read_line(msg_str, MSG_LEN); // flush rest of line
      puts("Invalid input. Try again.");
      continue;
    }
    if (day == 0) break;
    
    if (month < 1 || month > 12) {
      puts("Error, month must be a number between 1 and 12 (both included)");
      read_line(msg_str, MSG_LEN); // flush rest of line
      continue;
    }
    if (day < 1 || day > 31) {
      puts("Error, day must be a number between 1 and 31 (both included)");
      read_line(msg_str, MSG_LEN); // flush rest of line
      continue;
    }
    if (hour < 0 || hour > 23) {
      puts("Error, time must be a number between 0 and 23 (both included)");
      read_line(msg_str, MSG_LEN); // flush rest of line
      continue;
    }
    
    snprintf(month_str, sizeof month_str, "%2d", month);
    snprintf(day_str,  sizeof day_str,  "%2d", day);
    snprintf(hour_str, sizeof hour_str, "%2d", hour);

    read_line(msg_str, MSG_LEN);

    // Optional: normalize spacing — trim leading spaces from message
    size_t lead = 0;
    while (msg_str[lead] == ' ') lead++;
    if (lead) memmove(msg_str, msg_str + lead, strlen(msg_str + lead) + 1);

    // Find insertion index: sort by month then by day then hour
    for (i = 0; i < num_remind; i++) {
      int month_cmp = strncmp(month_str, reminders[i], 2); // compare "mm"
      if (month_cmp < 0) break;
      if (month_cmp == 0) {
        int day_cmp = strncmp(day_str, reminders[i] + 3, 2);        // compare "dd"
        if (day_cmp < 0) break;
        if (day_cmp == 0) {
          int hour_cmp = strncmp(hour_str, reminders[i] + 6, 2); // compare "hh"
          if (hour_cmp < 0) break;
        }
      }
    }
    // Shift right to make room
    for (j = num_remind; j > i; j--) {
      strcpy(reminders[j], reminders[j - 1]);
    }

    // Build "mm dd hh message" (we insert our own single space before message)
    snprintf(reminders[i], sizeof reminders[i], "%s %s %s %s", month_str, day_str, hour_str, msg_str);

    num_remind++;
  }

  printf("\nDay Time Reminder\n");
  for (i = 0; i < num_remind; i++) {
    printf(" %s\n", reminders[i]);
  }
  return 0;
}
