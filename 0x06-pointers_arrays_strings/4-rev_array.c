#include "main.h"
/**
 * reverse_array - function that reverses an array
 * @a: input array
 * @n: positions in the array
 */

void reverse_array(int *a, int n)
{
	int b, c, temp;

	c = n - 1;

	for (a = 0; a < n / 2; a++)
	{
		temp = a[b];
		a[b] = a[c];
		a[j--] = temp;
	}
}
