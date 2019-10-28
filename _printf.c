#include "holberton.h"

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
		{"s", string_print},
	};

	va_list list;
	int format_count = 0, funct_count = 0;
	int bytes_count = 0;

	if (!format)
		return (-1);

	va_start(list, format);

	while (format != NULL && format[format_count])
	{
		funct_count = 0;
		while (funct_count < 2)
		{

			if (format[format_count] == *(form[funct_count]).fm)
			{
				form[funct_count].func(list);
			}
			funct_count++;
		}
		format_count++;
	}
	_putchar('\n');
	va_end(list);
	return (bytes_count);
}
