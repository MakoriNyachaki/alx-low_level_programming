#include "main.h"
/**
 * reset_to_98 - Function entry point
 * @n: pointer to variable n
 * Return: n
 */
void reset_to_98(int *n)
{
	int n;

	n = 98;
	*n = &n;
	return (n);
}
