#include "main.h"
/**
 * print_alphabet - prints the alphabet 10 times in lowercase
 */
void print_alphabet(void)
{
	char i;
	int j;

	j = 0;
	while (j <= 10)
	{
		i = 'a';
		while (i <= 'z')
			{
				_putchar(i);
				i++;
			}
		_putchar('\n');
		j++;
	}
}
