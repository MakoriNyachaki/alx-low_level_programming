#include "main.h"
/**
 * print_most_numbers - Prints th numbers
 */
void print_most_numbers(void)
{
	int a;

	a = 48;

	while (a < 58)
	{
		if (a != 50 && a != 52)
		{
			_putchar(a);
		}
		a++;
	}
	_putchar('\n');
}
