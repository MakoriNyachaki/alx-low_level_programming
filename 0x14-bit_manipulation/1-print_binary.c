#include "main.h"

/**
 * print_binary - prints a binary
 * representation of a number
 *
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	unsigned long int p = (unsigned long int)1 << (sizeof(n) * 8 - 1);

	while (p)
	{
		_putchar((n & p) ? '1' : '0');
		p >>= 1;
	}
}
