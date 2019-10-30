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
		{"S", string_print},
		{"i", int_print},
		{"d", int_print}
	};
	int i = 0, j = 0, bytes_count = 0, mark;

	while (format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), bytes_count++, i++;
		if (format[i] == '%')
		{
			mark = 0;
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;
			if (format[i] == '%')
				_putchar('%'), i++, bytes_count++, mark = 1;
			else
			{
				while (j < 5)
				{
					if (format[i] == *(form[j]).fm)
					{
						bytes_count += form[j].func(list), i++, mark = 1;
					}
					j++;
				}
				j = 0;
			}
			if (mark == 0)
				_putchar(format[i - 1]), _putchar(format[i]), bytes_count += 2, i++;
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
