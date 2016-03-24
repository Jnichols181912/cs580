/*
 * Johnathan Nichols, Y282D447, Assignment 5
 */
 /*
 * File: ar_stack.h
 */

#ifndef _AR_STACK_H_
#define _AR_STACK_H_

#define MAX_CHARS    1000

typedef struct charstack
{
    char elements[MAX_CHARS];
    int last;
} Charstack;

void stack_init(Charstack *s);
char stack_top(Charstack *s);
char stack_pop(Charstack *s);
void stack_push(char new_char, Charstack *s);
int stack_empty(Charstack *s);

#endif
