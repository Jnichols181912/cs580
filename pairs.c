/*
 * Johnathan Nichols, Y282D447, Assignment 3
 */

/*
 * File: pairs.c
 *
 * This program uses a combination of File I/O and Structures to access
 * part data to keep track of inventory for a part dealer.
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "utils.h"
#include "pairs.h"
#include "ar_stack.h"

int main(void)
{
   Charstack char_list;             	        /* array of part records    */
   stack_init(&char_list);			            /* initializes part_list    */
   char infile[100];                            /* input file name          */
   int choice;                                  /* choice of options 1-4    */

    printf("\nThis program determines whether or not pairs of brackets, braces, and parentheses in a text file are properly matched and nested.\n");
    printf("Enter the filename of a text file to check: ");
    get_string(100,infile);

    /* Read (),[],{} from input file */
    FILE *in_fp = fopen(infile, "r");
    if (in_fp == NULL){				            /* if file not found, error occurs and terminates program */

        printf("Error: Could not open input file %s for reading.\n", infile);
        exit(EXIT_FAILURE);
    }
    while (!feof(in_fp)){}				        /* if file found, reads in all parts into Partlist */


    }
    fclose(in_fp);

