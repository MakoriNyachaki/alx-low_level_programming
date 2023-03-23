#include "main.h"
/**
 * print_line - Prints line
 * @n: number of times of the character
 * Return: 0 Always success
 */
void print_line(int n)
{
	int a;

	a = 0;

	if (n > 0)
	{
		while (a < n)
		{
			_putchar('_');
			a++;
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
	return (0);
}
