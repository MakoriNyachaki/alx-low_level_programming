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
	return (((index < sizeof(unsigned long int) * 8) ?
				(((*n >> index) & 1) ? (*n ^= (1UL << index),
					1) : 1) : -1));
}
