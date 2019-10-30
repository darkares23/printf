#include <limits.h>
#include <stdio.h>
#include "../holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int len, len2;

	len = printf("hola%    %%%%c\n", 'n');
	len2 = _printf("hola%    %%%%c\n", 'n');

	len = printf("hola\n");
	len2 = _printf("hola\n");

	printf("%!\n");
	_printf("%!\n");

    return (0);
}
