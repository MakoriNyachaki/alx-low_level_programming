#include "main.h"
/**
 * print_square - Prints a  square
 * @size: size of the square
 * Return: 0 always success
 */
void print_square(int size)
{
	int a, b;

	if (size > 0)
	{
		for (a = 1; a <= size; a++)
		{
			for (b = size; b >= 1; b--)
			{
				_putchar(23);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
	return (0);
}
