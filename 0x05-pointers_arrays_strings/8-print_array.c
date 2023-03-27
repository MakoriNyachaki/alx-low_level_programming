#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of the array
 * @a: integer pointer
 * @n: length of the array
 */
void print_array(int *a, int n)
{
	int q;

	for (q = 0; q < n; q++)
	{
		if (q == 0)
		{
			printf("%d", a[q]);
		}
		else
		{
			printf(", %d", a[q]);
		}
	}
	printf("\n");
}
