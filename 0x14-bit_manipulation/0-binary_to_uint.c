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
	unsigned int out = 0;

	if (b == NULL)
		return (0);
	while (b != '\0')
	{
		if (*b == '0' || *b == '1')
		{
			out <<= 1;
			out |= (*b - '0');
		}
		else
		{
			return (0);
		}
	}
	return (out);
}
