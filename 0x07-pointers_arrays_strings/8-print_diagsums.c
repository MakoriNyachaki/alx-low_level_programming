#include <stdio.h>
#include "main.h"
/**
 * print_diagsums - sum of two diagnals
 * @a: number to be summed up
 * @size: size of the array
 */
void print_diagsums(int *a, int size)
{
	int m;
	unsigned int add1, add2;

	add1 = 0;
	add2 = 0;
	m = 0;

	while (m < size)
	{
		add1 = a[(size * m) + m];
		add2 = a[(size * (m + 1)) - (m + 1)];
		m++;
	}
	printf("%d, %d\n", add1, add2);
}
