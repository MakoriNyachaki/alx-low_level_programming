#include "main .h"

/**
 * clear_bit - sets the value of a bit to 0
 * at a given index
 *
 * @n: n
 * @index: index
 *
 * Return: 1 if it worked else -1
 */

int clear_bit(unsigned long int *n,  unsigned int index)
{
	unsigned long int k;
	unsigned int p;

	if (index > 64)
		return (-1);

	p = index;

	k = 1;
	while (p > 0)
	{
		k *= 2;
		p--;
	}
	if ((*n >> index) & 1)
		*n -= k;
	return (1);
}
