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
	return (b ? &&*b ? ((*b == '0' ? binary_to_int(++b) << 1
					 * b == '1' ? binary_to_int(++b) << 1 | 1 : 0)) : 0);
}
