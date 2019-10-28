#include "holberton.h"
#include <stdio.h>
/**
 *char_print - prints char
 *@list: char arg
 */

int char_print(va_list list)
{
	int i = 0;
	char *nil = "(null)";

	_putchar(va_arg(list, int));
	
	return (i);
}

/**
* string_print - prints string
*@list: char arg
* Return: none
*/

int string_print(va_list list)
{
	char *s;
	int i = 0, strlen;
	char text;
	char *nil = "(null)";
	
	s = va_arg(list, char *);

	if (s == NULL)
	{
		_puts(nil);
		for (strlen = 0; nil[strlen] != '\0'; strlen++)
		
		return (strlen);
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		text = s[i];
		_putchar(text);
	}
	_putchar('\n');
	return (i);
}
