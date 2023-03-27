#include "main.h"
/**
 * puts_half - printsthe last half
 * @str: string to be divided
 */
void puts_half(char *str)
{
	int len, a, b;

	len = 0;

	while (str[len] != '\0')
	{
		len++;
	}

	if (len % 2 == 0)
	{
		for (a = len / 2; str[a] != '\0'; a++)
		{
			_putchar(str[a]);
		}
	}
	else if (len % 2)
	{
		for (b = (len - 1) / 2; b < len - 1; b++)
		{
			_putchar(str[b + 1]);
		}
	}
	_putchar('\n');
}
