# printf
Goin to create a printf function for Holberton School project

DESCRIPTION

The printf function performs received printouts by means of formats.  

  rintf("text1 %codeFormat1 textn %codeFormatn",  variable1, variablen);


  Used prototypes and their variables
  

int _putchar(char c);

writes the character c to stdout

variables
@c: The character to print

void _puts(char *str);

printing function

variables

@str: parameter to print

int _printf(const char *format, ...);

function that produces output according to a format.

variable
@format: is a character string. The format string is
composed of zero or more directives


int get_format(va_list list, const char *format);

prints char

variable
@list: char arg
@format: format

int char_print(va_list list);

prints char

variable
@list: char arg

int string_print(va_list list);

prints string

variable
@list: char arg

int int_print(va_list list);

prints int

vaiable
@list: int print


        
Prints one message per screen using a "format string" that includes instructions 
for mixing multiple strings in the final string to be displayed on the screen.

Printf is a special function because it receives a variable number of parameters.
The first parameter is fixed and is the format string. It includes text to be printed 
literally and marks to be replaced by text obtained from the additional parameters.
Therefore, printf is called with as many parameters as there are marks in the format string
plus the string itself.


how to use it

the format string is made up of information about the output formats.
It consists of individual groups of characters, which must start with the % symbol. 
The conformation of the string is basically given by the igno % followed by the conversion
character, for example %i, this command prints a integer with sign.


EXAMPLE

#include <stdio.h>

int main(void)
{
    int outgrowth;

    outgrowth = 5+2;
    printf("sum result: %i\n",outgrowth);

    outgrowth = 5-2;
    printf("result of subtraction: %i\n",outgrowth);

    outgrowth = 5*2;
    printf("Multimplication Result: %i\n",outgrowth);

    outgrowth = 5/2;
    printf("Result of the division: %i\n",outgrowth);

    return(0);
}

SYNOPSIS

#include "holberton.h"

int printf(const char* format,...)

rintf("text1 %codeFormat1 textn %codeFormatn",  variable1, variablen);

EXAMPLE


#include <stdio.h>
#include <stdlib.h>
/**
*
*/
  int numint=65; long numLong =2155;

  float numFloat=8.21; double numDouble=6.1226;

  char Char='c'; char string []= "This is a string";

  printf ("numint value %d\n", numint);
    
  printf ("Char value %c\n", Char);

  printf ("string value %s\n", string);

  return 0;
}

DATE
30/10/2019
CONTRIBUTORS

Juann Sebastian Ocampo - 1162@holbertonschool.com
Julian Castañeda - 1277@holbertonschool.com
