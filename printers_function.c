#include "holberton.h"
/**
 *char_print - prints char
 *@list: char arg
 *Return: 1
 */
int char_print(va_list list)
{
	int count = 0;

	count = count + _putchar(va_arg(list, int));

	return (count);
}

/**
* string_print - prints string
*@list: char arg
* Return: len of sring
*/

int string_print(va_list list)
{
	char *s, *nil = "(null)";
	int i;

	s = va_arg(list, char *);

	if (s == NULL)
	{
		_puts(nil);
		for (i = 0; nil[i] != '\0'; i++)
		;
		return (i);
	}
	for (i = 0; s[i] != '\0'; i++)
		_putchar(s[i]);

	return (i);
}
