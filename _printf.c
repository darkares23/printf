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

	if (!format)
		return (-1);
		
	va_start(list, format);
	
	va_end(list);

	return (get_format(format, list));
}
