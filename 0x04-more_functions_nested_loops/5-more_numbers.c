#include "main.h"
/**
 * more_numbers - prints 0 to 14
 */

void more_numbers(void)
{
	int a, count;

	count = 0;

	while (count < 10)
	{
		a = 0;

		while (a <= 14)
		{
			_putchar(a +'0');
			a++;
		}
		count++;
		_putchar('\n');
	}
	_putchar('\n');
}
