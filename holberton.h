#ifndef PRINTF
#define PRINTF
#include <stdarg.h>
#include <stdio.h>

/**
*struct format_t - Struct format_t
*@fm: format
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
int get_format(const char *format, va_list list, fmType *form);
int char_print(va_list list);
int string_print(va_list list);


#endif
