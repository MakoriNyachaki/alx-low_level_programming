#include <stdio.h>
/**
 * _puts - prints a character the followed by a new line
 * @str: string to be printed
 */
void _puts(char *str)
{
	int k;

	for (k = 0; str[k] != '\0'; k++)
	{
		_putchar(str[k]);
	}
	_putchar('\n');
}
