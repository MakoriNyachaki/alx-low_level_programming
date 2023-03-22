#include <stdio.h>
/**
 * print_to_98 - function entry
 * @n: integer where to start from
 */
void print_to_98(int n)
{
	n = n;

	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else
	{
		while (n >= 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
}

