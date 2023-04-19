#include <stdlib.h>
#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer
 *
 * @array: the array itself
 * @size: number of elements in the array
 * @cmp: a pointer to the function that is used
 * to compare values
 *
 * Return: -1 if no element matche
 * or if size <= 0,
 * or int_index first index of the first element
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array != NULL && cmp != NULL)
	{
		while (i < size)
		{
			if (cmp(array[i] != 0))
				return (i);
			return (-1);
			i++;
		}
	}
	return (-1);
}
