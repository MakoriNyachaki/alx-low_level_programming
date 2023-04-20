#ifndef VARIADIC_FUNC
#define VARIADIC_FUNC

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct _types - structure of types
 *
 * @chr: string representation
 * @ptr: fxn pointer
 */

typedef struct _types
{
	char *chr;
	void (*ptr)(va_list);
} f_type;

	int _putchar(char c);
	int sum_them_all(const unsigned int n, ...);
	void print_numbers(const char *separator, const unsigned int n, ...);
	void print_strings(const char *separator, const unsigned int n, ...);
	void print_all(const char * const format, ...);
#endif /* end ifndef */
