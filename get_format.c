#include "holberton.h"

/**
 *get_format - prints char
 *@list: char arg
 *@format: format
 *Return: 1
 */
int get_format(const char *format, va_list list, fmType *form)
{
int i = 0;

for (; format[i]; i++)
	;
form[1].func(list);

/*while (format != NULL)
{
	j = 0;
	if (format[i] == '%' && format[i + 1] == '%')
		_putchar('%');
	while (format[i] == '%' || format[i + 1] == ' ')
		i++;*/
	/*if (format[i] != ' ' && format[i - 1] == ' ' && format[i] != 'c'
	&& format[i - 1] == 's')
	{
		_putchar(format[i]);
		i++;
	}
	if (format[i] == '%')
	{
		while (form[j].fm)
		{
			if (format[i + 1] == *(form[j]).fm)
			{
				i++;
				form[1].func(list);
			}
			j++;
		}
		i++;
	}
	else
	{
		_putchar(format[i]);
		i++;
	}
}*/
	return (i);
}
