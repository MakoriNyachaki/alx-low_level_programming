#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - a function that executes a function
 * given as a parameter on each element of an array
 *
 * @array: the array itself
 * @size: size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: Nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && action != NULL)
	{
		while (size-- > 0)
		{
			action(*array);
			array++;
		}
	}
}
