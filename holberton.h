#ifndef PRINTF
#define PRINTF
#include <stdarg.h>


int _putchar(char c);

int _printf(const char *format, ...);
void _puts(char *str);

/**
*struct format_t - Struct format_t
*@fm: format
*@func: associated function
*/
typedef struct format_t
{
	char *fm;
	char (*func)(va_list list);
} fmType;


#endif
