#include "holberton.h"
/**
 *int_print - prints int
*@list: int print
*/

int int_print(va_list list)
{
	int n = va_arg(list, int);

if (n < 0)
{
_putchar('-');
n = n * -1;
}
if (n / 10 != 0)
n = (n / 10);
_putchar((n % 10) + '0');
/**
	if (a = 0)
	{
		_putchar('-');
	}
	if (a / 10 != 0)
	{
		a = (a / 10);
		_putchar((a % 10) + '0');
	}
*/
	
	/**
		while (a > 9)
		{
			a++;
		}
	return(a);
	*/
	/**
	int int_print(va_list list)
	{
		a = va_arg(list, int);

		if (a <= 9 && a >= -9)
		{
			return (1);
		}
		else
		{
			return (int_print(a++));
		}
	}
	return(0);
	*/
	return (0);
}



