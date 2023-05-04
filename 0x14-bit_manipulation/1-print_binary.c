#include "main.h"

/**
 * print_binary - prints a binary
 * representation of a number
 *
 * @n: number to be converted
 */

void print_binary(unsigned long int n)
{
	int p = sizeof(unsigned long int) * 8;
	int m = p - 1;

	for (; m >= 0; m--)
	{
		_putchar((p >> m) & 1 ? '1' : '0');
	}
}
