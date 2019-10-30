#include "holberton.h"
/**
  * recursion_int - Prints recursivity a int
  * @num: integer to print
  * Return: count of prints
  */
void recursion_int(int num)
{
	unsigned int val;

	val = num;

	if (val / 10 != 0)
	{
		recursion_int(val / 10);
	}
	_putchar(val % 10 + '0');
}
