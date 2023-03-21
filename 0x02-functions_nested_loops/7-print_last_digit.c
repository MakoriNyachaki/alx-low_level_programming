#include "main.h"
/**
 * print_last_digit - prints the las digit of a number
 * @m: integer whose last digit to be found
 * Return: returns the last digit l
 */
int print_last_digit(int m)
{
	int l;

	if (m < 0)
	{
		m = -m;
	}
	l = m % 10;
	if (l < 0)
	{
		l = -l;
	}
	_putchar(l + '0');
	return (l);
}
