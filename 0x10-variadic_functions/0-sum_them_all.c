#include "variadic_functions.h"
#include <stdarg.h>
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
	unsigned int k;
	int sum = 0;

	va_list vl;

	if (n != 0)
	{
		va_start(vl, n);

		while (k < n)
		{
			sum = sum + va_arg(vl, int);
			k++;
		}
	}
	else
		return (0);

	va_end(vl);
	return (sum);
}
