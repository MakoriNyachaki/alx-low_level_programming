#include "main.h"
/**
 * times_table - Prints the times table
 */
void times_table(void)
{
	int i, j;
	long int r;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			r = i * j;
			_putchar((i / 10) + '0');
			_putchar((j / 10) + '0');
			_putchar(',');
			_putchar(' ');
			_putchar(r + '0');
			_putchar('\n');
		}
	}
}

