#include "main.h"
/**
 * jack_buer - function entry point
 */
void jack_buer(void)
{
	int i, j;

	int i = '0';

	while (i < 24)
	{
		int j = '0';

		while (j < 60)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			i++;
		}
		j++;
	}
}
