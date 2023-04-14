#include "main.h"
#include <stdlib.h>

/**
 * _realloc - reallocates memory using malloc and free
 *
 * @ptr: previous memory pointer
 * @old_size: size of old memory
 * @new_size: size of new memory
 *
 * Return: pointer to the newly allocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *optr;
	char *ptr_o;
	unsigned int index = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	optr = malloc(new_size);
	if (!optr)
		return (NULL);
	ptr_o = ptr;

	if (new_size < old_size || new_size > old_size)
	{
		while (index < new_size || index > old_size)
		{
			optr[index] = ptr_o[index];
			index++;
		}
	}
	free(ptr);
	return (optr);
}
