#include "holberton.h"
/**
 *int_print - prints int
*@list: int print
*/

int int_print(va_list list)
{
	unsigned int n = va_arg(list, int), x;
	int count = 0;	

	if (n)
	{
		_putchar('-');
		n = n * -1;
		count = count + 1;
	}
	x = n;
	if (n / 10 != 0)
	{
	int_print((*)n);
	_putchar((n % 10) + '0');
	}
	while (x > 9)
	{
		x = x / 10;
		count++;
	}
	count++;
	return (count);
	
}
