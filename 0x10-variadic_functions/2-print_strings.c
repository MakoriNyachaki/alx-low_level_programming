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
	if (separator)
	{
		int index = 0;

		va_list vl;

		while (index < n)
		{
			va_start(vl, n);

			if ((va_arg(vl, char*) != NULL) || (va_arg(vl, char*) != " "))
			{
				printf("%s", va_arg(vl, char*));

				if (index != (n - 1))
				{
					printf("%s", separator);
				}
			}
			index++;
		}
		va_end(vl);
	}
	printf("\n");
}
