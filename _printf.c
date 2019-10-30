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
	};

	int i = 0, j = 0, count = 0;

	while (format[i])
	{
		if (format[i] != '%')
			_putchar(format[i]), count++, i++;
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '\0')
				return (-1);
			while (format[i] == ' ')
				i++;

			if (format[i] == '%')
				_putchar('%'), i++, count++;
			else
			{
				while (j <= 1)
				{
					if (format[i] == *(form[j]).fm)
					{
						count += form[j].func(list);
						i++;
					}
					j++;
				}
				j = 0;
			}
		}
	}
	printf("%i\n", count);
	return (count);
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
