#include "main.h"
/**
 * print_square - Prints a  square
 * @size: size of the square
 * Return: 0 always success
 */
void print_square(int size)
{

	int i, j;

	if (n > 0)
	{
		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
