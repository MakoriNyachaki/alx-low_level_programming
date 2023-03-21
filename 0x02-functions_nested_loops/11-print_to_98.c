#include "main.h"
/**
 * print_to_98 - function entry
 * @n: integer where to start from
 */
void print_to_98(int n)
{
	n = 0;

	if (n <= 98)
	{
		while (n <= 98)
		{
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
			n++;
		}
	}
	else
	{
		_putchar(n + '0');
		_putchar(',');
		_putchar(' ');
		n--;
	}
}
