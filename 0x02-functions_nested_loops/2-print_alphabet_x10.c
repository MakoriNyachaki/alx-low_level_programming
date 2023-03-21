#include "main.h"
/**
 * print_alphabet_x10 - entry into the function
 */
void print_alphabet_x10(void)
{
	char i;
	int h;

	h = 0;
	while (h < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		h++;
	}
}
