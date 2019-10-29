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

	printf("ho  la%s\n", "nsdfsdf");
	_printf("ho  la%s\n", "nsdfsdf");

	printf("%%%    %s\n", "nsdfsdf");
	_printf("%%%    %s\n", "nsdfsdf");

	len = _printf("Percent:[%%]\n");
    len2 = printf("Percent:[%%]\n");

    return (0);
}
