#include "variadic_functions.h"
/**
 * sum_them_all - functions that sums all its params
 *
 * @n: first integer defined
 * @...: infinite params
 *
 * Return: 0 if n==0 or sum
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int k = 0;
	int sum = 0;

	va_list vl;

	if (n == 0)
		return (0);

	va_args(vl, n);

	for (; k < n; k++)
	{
		sum = sum + va_arg(vl, int);
	}
	va_end(vl);
	return (sum);
}
