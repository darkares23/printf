#include "holberton.h"

/**
 *char_print - prints char
 *@list: char arg
 *Return: 1
 */
int get_format(const char *format, va_list list)
{
	fmType form[] = {
		{"c", char_print},
		{"s", string_print},
	};
	
int format_count = 0, funct_count = 0;

while (format == NULL)
	{
		funct_count = 0;
		if (format[format_count] == '%' && format[format_count + 1] == '%')
			_putchar('%');
		if (format[format_count] == '%')
		{
			while (funct_count < 2)
			{
				if (format[format_count + 1] == *(form[funct_count]).fm)
				{
					format_count++;
					form[funct_count].func(list);
				}
				funct_count++;
			}
			format_count++;
		}
		else
		{
			_putchar(format[format_count]);
			format_count++;
		}
	}
	return (format_count);
}
