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
	unsigned int index = 0;
	int add = 0;

	va_list la;

	if (n != 0)
	{
		va_start(la, n);

		while (index < n)
		{
			sum += va_arg(la, int);
			index++;
		}

		va_end(la);
	}
	else
	{
		return (0);
	}
	return (add);
}
