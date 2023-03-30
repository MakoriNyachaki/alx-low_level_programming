#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: input array
 * @n: positions in the array
 */

void reverse_array(int *a, int n)
{
	int b, end;

	end = n - 1;
	for (b = 0; b < n / 2; b++)
	{
		int begin, last;

		start = a[b];
		last = a[end];
		a[b] = last;
		a[b] = begin;
		a[end] = begin;
		end--;
	}
}
