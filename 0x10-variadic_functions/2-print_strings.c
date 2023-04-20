#include "variadic_functions.h"

/**
 * print_strings - print strings followed by a new line
 *
 * @separator: separates the strings
 * @n: firstr string
 *
 * Return: nothing
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list vl;
	unsigned int index;

	index = 0;
	va_start(vl, n);

	if (!(va_arg(vl, char*)))
	{
		printf("nil");
	}
	else
	{
		while (index < n)
		{
			printf("%s", va_arg(vl, char*));
			index++;

			if (index < n && separator)
				printf("%s", separator);
		}
	}
	_putchar('\n');
	va_end(vl);
}
