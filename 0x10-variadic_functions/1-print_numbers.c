#include "variadic_functions.h"

/**
 * print_numbers - prints numbers followed by a new line
 *
 * @separator: separates numbers
 * @n: first number
 *
 * Return: nothing
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	unsigned int index = 0;

	va_list vl;

	va_start(vl, n);

	while (index < n)
	{
		printf("%d", va_arg(vl, int));
		if (index == (n - 1) && separator)
			printf("%s", separator);
		index++;
	}
	_putchar('\n');
	va_end(vl);
}
