/*
 * Johnathan Nichols, Y282D447, Assignment 4
 */

/*
 * File: utils.c
 *
 * This module provides functions for getting keyboard input from the user,
 * initially as a string, and converting it to various numeric types.  Each
 * function will repeat the prompt and reading of the user's response until
 * a valid number of the correct type is entered.
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "utils.h"

/* Prompts user to enter number, reads response as string, and converts string
 * to int, until a valid number is obtained. Returns the resulting int.
 */
int get_int(char *prompt){

   	char str[20];          /* original user input as a string                 */
   	long num;              /* number converted from user input                */
   	int valid_number = 1;  /* flag tracks valid conversion of input to number */
   	char *end_ptr;         /* pointer to char after last used in conversion   */

   	do{
      	if (!valid_number) printf("\nYou must enter an integer. \n");
      	printf("%s", prompt);
      	scanf("%s", str);
      	num = strtol(str, &end_ptr, 10);
      	if (end_ptr != (str + strlen(str)))
         	valid_number = 0;
      	else
         	valid_number = 1;
   	} 	while (!valid_number);

   	return (int) num;
}

/* Prompts user to enter number, reads response as string, and converts string
 * to long, until a valid number is obtained. Returns the resulting long.
 */
long get_long(char *prompt){

   	char str[20];          /* original user input as a string                 */
   	long num;              /* number converted from user input                */
   	int valid_number = 1;  /* flag tracks valid conversion of input to number */
   	char *end_ptr;         /* pointer to char after last used in conversion   */

   	do{
      	if (!valid_number) printf("\nYou must enter an integer. \n");
      	printf("%s", prompt);
      	scanf("%s", str);
      	num = strtol(str, &end_ptr, 10);
      	if (end_ptr != (str + strlen(str)))
         	valid_number = 0;
      	else
         	valid_number = 1;
  	 } 	while (!valid_number);

   	return num;
}

/* Prompts user to enter number, reads response as string, and converts string
 * to float, until a valid number is obtained. Returns the resulting float.
 */
float get_float(char *prompt){

   	char str[20];          /* original user input as a string                 */
   	float num;             /* number converted from user input                */
   	int valid_number = 1;  /* flag tracks valid conversion of input to number */
   	char *end_ptr;         /* pointer to char after last used in conversion   */

   	do{
      	if (!valid_number) printf("\nYou must enter a number. \n");
      	printf("%s", prompt);
      	scanf("%s", str);
      	num = strtof(str, &end_ptr);
      	if (end_ptr != (str + strlen(str)))
         	valid_number = 0;
      	else
         	valid_number = 1;
   	} 	while (!valid_number);

   	return num;
}

/* Prompts user to enter number, reads response as string, and converts string
 * to double, until a valid number is obtained. Returns the resulting double.
 */
double get_double(char *prompt){

   	char str[20];          /* original user input as a string                 */
   	double num;            /* number converted from user input                */
   	int valid_number = 1;  /* flag tracks valid conversion of input to number */
   	char *end_ptr;         /* pointer to char after last used in conversion   */

   	do{
      	if (!valid_number) printf("\nYou must enter a number. \n");
      	printf("%s", prompt);
      	scanf("%s", str);
      	num = strtod(str, &end_ptr);
      	if (end_ptr != (str + strlen(str)))
         	valid_number = 0;
      	else
         	valid_number = 1;
   	} 	while (!valid_number);

   	return num;
}

/* this function will correctly take in a string input, of specified length, for
 * further use in the program.
 */
void get_string(int length, char input[]){

   	int i = 0;
   	for (; (i < length) && ((input[i] = getchar()) != '\n'); i++) ;
   	if (i == length){
   
      	input[length-1] = '\0';
      	while (getchar() != '\n') ;
   	}
   	else
      	input[i] = '\0';
   
}

