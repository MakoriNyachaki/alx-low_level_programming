#include "main.h"

/**
 * set_bit - sets a value of a bit to 1 at a given index
 *
 * @n: integer
 * @index: index
 *
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	return ((index >= sizeof(unsigned long int) * 8) ? -1 :
			((*n |= 1UL << index), 1));
}
