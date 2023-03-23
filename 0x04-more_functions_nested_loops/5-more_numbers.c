#include "main.h"
/**
 * more_numbers - prints 0 to 14
 */

void more_numbers(void)
{
	int a, count;

	count = 0;
	a = 0;

	while (count < 10)
	{
		while (a <= 14)
		{
			if (a >= 10)
				_putchar(a / 10 + '0');
			_putchar(a % 10 + '0');
			++a;
		}
		_putchar('\n');
		a = 0;
		count++;
	}
}
