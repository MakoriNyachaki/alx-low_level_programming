#include "main.h"
/**
 * print_line - Prints line
 * @n: number of times of the character
 * Return: 0 Always success
 */
void print_line(int n)
{
	int a;

	a = 1;

	while (a <= n)
	{
		_putchar(96);
		a++;
	}
	_putchar('\n');
	return (0);
}
