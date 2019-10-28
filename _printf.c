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

void string_print(va_list list)
{
	char *s;

	s = va_arg(list, char *);
	if (s == '\0')
	{
		_puts("(nil)");
		return;
	}
	_puts(s);
}

/**
 * _printf - function that produces output according to a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives
 *Returns: the number of characters printed
 *(excluding the null byte used to end output to strings) 
*/

int _printf(const char *format, ...)
{

	fmType form[] = {
		{"c", char_print},
		{"i", int_print},
		{"f", float_print},
		{"s", string_print},
		{NULL, NULL}
	};

	va_list list;
	int i = 0, j = 0;
	char *sep = "";

	va_start(list, format);

	while (format != NULL && format[i])
	{
		j = 0;
		while (j < 4)
		{

			if (format[i] == *(form[j]).fm)
			{
				form[j].func(sep, list);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(list);
}

