#include "main.h"
/**
 * times_table - Prints the times table
 */
void times_table(void)
{
	int i, j;
	int r;

	for (i = 0; i <= 9; i++)
	{
		for (j = 0; j <= 9; j++)
		{
			r = i * j;
			_putchar(i + '0');
			_putchar(j + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(r + '0');
		}
		_putchar('\n');
	}
}

