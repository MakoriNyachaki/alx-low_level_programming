#include "main.h"
/**
 * print_triangle - Prints the triangle
 * @size: Sides of the triangle
 * Return: 0 always success
 */

void print_triangle(int size)
{
	int x, y;

	if (size > 0)
	{
		for (x = 1; x <= size; x++)
		{
			for (y = x; y <= size; y++)
			{
				_putchar(23);
			}
			_putchar('\n');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
	return (0);
}
