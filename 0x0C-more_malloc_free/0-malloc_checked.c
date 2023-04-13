#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *size_m;

	size_m = (void *) malloc(b);

	if (size_m == NULL)
		exit(98);
	return (size_m);
}

