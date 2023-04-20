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

	va_list vl;

	if (separator && n)
	{
		va_start(vl, n);

		while (num < n)
		{
			printf("%d", va_arg(vl, int));
			if (num != (n - 1))
				printf("%s ", separator);
			num++;
		}
	}
	va_end(vl);

	_putchar('\n');
}
