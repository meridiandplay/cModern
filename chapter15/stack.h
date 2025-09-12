/*
 * stack.h
 */

void stack_overflow (void);
void stack_underflow (void);
void make_empty (void);
bool is_empty (void);
bool is_full (void);
void push (int i);
int pop (void);
int process_operation (int x, int y, char ch);
