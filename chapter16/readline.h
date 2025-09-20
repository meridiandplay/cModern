/*
 * readline.h: Reads a input
 *
 */

#ifndef READLINE_H
#define READLINE_H

/* read_line: Skips leading white-space characters then reads
 * the remainder of the input line and stores it in str.
 * Truncates the line if length exceeds n, Returns the
 * number of characters stored
 */

int read_line (char str[], int in);

#endif
