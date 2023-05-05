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
	return ((index < 64) ? ((*n) &= ~(1 << index)), ((*n)
			|= OU), 1 : -1);
}
