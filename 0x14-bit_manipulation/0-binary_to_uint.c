#include "main.h"

/**
 * binary_to_uint - conversts a binary number to unsigned int
 *
 * @b: binary string
 *
 * Return: unsigned int, 0 if
 * one or more characters in the string is not 0 or 1
 * or b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int index = 0, i = 0;

	if (!b || !*b)
		return (0);
	for (; b[index]; index++)
	{
		if (b != 48 && b != 49)
			return (0);
		else  if (b[index] == 49)
		{
			i <<= 1;
			i += 1;
		}
		else
			i <<= 1;
	}
	return (i);
}
