#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory using malloc
 * @b: memory size
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *size;

	size = (void *) malloc(b);

	if (size == NULL)
		exit(98);
	return (size);
}

