#include "holberton.h"

/**
 *get_format - prints char
 *@list: char arg
 *@format: format
 *Return: 1
 */
int get_format(va_list list, const char *format)
{
	fmType form[] = {
		{"c", char_print},
		{"s", string_print},
		{"i", int_print},
	};

	int i = 0, j, bytes_count = 0;

	while (format != NULL && format[i])
	{
		j = 0;
		if (format[i] == '%')
		{
			while (j < 3)
			{
				if (format[i + 1] == *(form[j]).fm)
				{
					i++;
					form[j].func(list);
					bytes_count++;
				}
				j++;
			}
			i++;
		}
		else
		{
			_putchar(format[i]);
			i++;
			bytes_count++;
		}
	}

	return (bytes_count);
}

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

	va_start(list, format);

	if (!format)
		return (-1);

	inde = get_format(list, format);
	va_end(list);

	return (inde);
}
