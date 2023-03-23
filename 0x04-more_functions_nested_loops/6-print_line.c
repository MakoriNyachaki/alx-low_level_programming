#include "main.h"
/**
 * print_line - Prints line
 * @n: number of times of the character
 * Return: 0 Always success
 */
void print_line(int n)
{
	int i;

	if (n > 0)
		for (i = 0; i < n; i++)
			_putchar('_');
	_putchar('\n');
}
