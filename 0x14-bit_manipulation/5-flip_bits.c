#include "main.h"


/**
 * flip_bits - returns the number of bits you would
 * flip to getfrom one number to another
 *
 * @n: n
 * @m: m
 *
 * Return: ....
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	if (n == m)
	{
		return (0);
	}
	else
	{
		return ((n & 1) != (m & 1) + flip_bits(n >> 1,
					m >> 1));
	}
}
