#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc -allocates memory for an array
 *
 * @nmemb: number of elements in the array
 * @size: size of element in the array
 *
 * Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *all;
	unsigned int y;

	y = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	all = malloc(nmemb * size);

	if (all != NULL)
	{
		while (y < (nmemb * size))
		{
			all[y] = '\0';
			y++;
		}
		return (all);
	}
	return (NULL);
}
