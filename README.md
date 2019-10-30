# printf
Goin to create a printf function for Holberton School project

DESCRIPTION

The printf function performs received printouts by means of formats.  

  rintf("text1 %codeFormat1 textn %codeFormatn",  variable1, variablen);
        
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
