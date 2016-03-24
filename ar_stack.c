/*
 * Johnathan Nichols, Y282D447, Assignment 5
 */
 /*
 * File: ar_stack.c
 *
 * This program uses an ADT to manipulate a stack.
 */

#include "ar_stack.h"

void stack_init(Charstack *s){

    s->last = -1;
}

char stack_top(Charstack *s){

    if (s->last == -1)
        return(NULL);

    else
        return s->elements[s->last];
}

char stack_pop(Charstack *s){

    char symbol;

    if (s->last == -1)
        return(NULL);

    else
        symbol = s->elements[s->last];
        s->last--;
        return symbol;
}

void stack_push(char new_char, Charstack *s){

    s->last++;
    s->elements[s->last] = new_char;
}

int stack_empty(Charstack *s){

    if (s->last == -1)
        return 1;

    else
        return 0;
}
