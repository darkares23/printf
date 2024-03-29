#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdio.h>

/**
*struct format_t - Struct format_t
*@fm: format type
*@func: associated function
*/
typedef struct format_t
{
	char *fm;
	int (*func)(va_list list);
} fmType;

int _putchar(char c);
void _puts(char *str);

int _printf(const char *format, ...);
int get_format(va_list list, const char *format);
int char_print(va_list list);
int string_print(va_list list);
int int_print(va_list list);
void recursion_int(int num);

#endif
