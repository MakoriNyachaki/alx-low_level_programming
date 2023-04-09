#include "main.h"
/**
 * _puts - prints a character the followed by a new line
 * @str: string to be printed
 */
void _puts(char *s)
{
	int k;

	for (k = 0; s[k] != '\0'; k++)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
