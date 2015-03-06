/*
 * First Lastname, ID ********, Assignment 1
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

/* Primpts user to enter number, reads response as string, and converts string
 * to int, until a valid number is obtained. Returns the resulting int.
 */
int get_int(char *prompt)
{
   char str[20];          /* original user input as a string                 */
   long num;              /* number converted from user input                */
   int valid_number = 1;  /* flag tracks valid conversion of input to number */
   char *end_ptr;         /* pointer to char after last used in conversion   */

   do {
      if (!valid_number) printf("You must enter an integer. ");
      printf("%s", prompt);
      scanf("%s", str);
      num = strtol(str, &end_ptr, 10);
      if (end_ptr != (str + strlen(str)))
         valid_number = 0;
      else
         valid_number = 1;
   } while (!valid_number);

   return (int) num;
}

/* Primpts user to enter number, reads response as string, and converts string
 * to long, until a valid number is obtained. Returns the resulting long.
 */
long get_long(char *prompt)
{
   char str[20];          /* original user input as a string                 */
   long num;              /* number converted from user input                */
   int valid_number = 1;  /* flag tracks valid conversion of input to number */
   char *end_ptr;         /* pointer to char after last used in conversion   */

   do {
      if (!valid_number) printf("You must enter an integer. ");
      printf("%s", prompt);
      scanf("%s", str);
      num = strtol(str, &end_ptr, 10);
      if (end_ptr != (str + strlen(str)))
         valid_number = 0;
      else
         valid_number = 1;
   } while (!valid_number);

   return num;
}

/* Primpts user to enter number, reads response as string, and converts string
 * to float, until a valid number is obtained. Returns the resulting float.
 */
float get_float(char *prompt)
{
   char str[20];          /* original user input as a string                 */
   float num;             /* number converted from user input                */
   int valid_number = 1;  /* flag tracks valid conversion of input to number */
   char *end_ptr;         /* pointer to char after last used in conversion   */

   do {
      if (!valid_number) printf("You must enter a number. ");
      printf("%s", prompt);
      scanf("%s", str);
      num = strtof(str, &end_ptr);
      if (end_ptr != (str + strlen(str)))
         valid_number = 0;
      else
         valid_number = 1;
   } while (!valid_number);

   return num;
}

/* Primpts user to enter number, reads response as string, and converts string
 * to double, until a valid number is obtained. Returns the resulting double.
 */
double get_double(char *prompt)
{
   char str[20];          /* original user input as a string                 */
   double num;            /* number converted from user input                */
   int valid_number = 1;  /* flag tracks valid conversion of input to number */
   char *end_ptr;         /* pointer to char after last used in conversion   */

   do {
      if (!valid_number) printf("You must enter a number. ");
      printf("%s", prompt);
      scanf("%s", str);
      num = strtod(str, &end_ptr);
      if (end_ptr != (str + strlen(str)))
         valid_number = 0;
      else
         valid_number = 1;
   } while (!valid_number);

   return num;
}

