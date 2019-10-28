#include "holberton.h"
/**
 *char_print - prints char
 *@list: char arg
 *@sep: separator
 */

void char_print(va_list list)
{
	_putchar(va_arg(list, int));
}
/**
 * int_print - prints int
 *@list: char arg
 *@sep: separator
 * Return: none
 */

void int_print(char *sep, va_list list)
{
	printf("%s%i", sep, va_arg(list, int));
}
/**
 * float_print - prints floats
 *@list: char arg
 *@sep: separator
 * Return: none
 */

void float_print(char *sep, va_list list)
{
	printf("%s%f", sep, va_arg(list, double));
}
/**
* string_print - prints string
*@list: char arg
*@sep: separator
* Return: none
*/

void string_print(char *sep, va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == NULL)
	{
		printf("%s(nil)", sep);
		return;
	}
	printf("%s%s", sep, s);
}