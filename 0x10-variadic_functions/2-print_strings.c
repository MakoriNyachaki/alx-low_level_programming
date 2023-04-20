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
	unsigned int index;

	va_list str;

	va_start(str, n);

	while (index < n)
	{
		if (!va_arg(str, char *))
			printf("nil");
		if (!separator)
			printf("%s", va_arg(str, char *));
		else if (separator && index == 0)
			printf("%s", va_arg(str, char *));
		else
			printf("%s%d", separator, va_arg(str, char *));
		index++;
	}
	_putchar('\n');

	va_end(str);
}
