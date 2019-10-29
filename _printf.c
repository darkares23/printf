#include "holberton.h"
/**
 * _printf - function that produces output according to a format.
 * @format: is a character string. The format string is
 * composed of zero or more directives
 *Return: the number of characters printed
 *(excluding the null byte used to end output to strings)
*/
int _printf(const char *format, ...)
{
	va_list list;
	int inde;

	fmType form[] = {
		{"c", char_print},
		{"s", string_print},
		{NULL, NULL}
	};

	if (!format)
		return (-1);
		
	va_start(list, format);
	
	inde = get_format(format, list, form);
	va_end(list);

	return (inde);
}
