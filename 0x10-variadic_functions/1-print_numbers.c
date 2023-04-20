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
	usigned int num;

	va_list na;

	num = 0;
	va_start(na, n);

	while (num < n)
	{
		if (!separator)
			printf("%d", va_arg(na, int));
		else if (separator && num == 0)
			printf("%d", va_arg(na, int));
		else
			printf("%s%d", va_arg(na, int));
		num++;
	}
	va_end(na);

	_putchar('\n');
}
