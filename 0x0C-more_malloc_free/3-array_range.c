#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 *
 * @min: minum range values
 * @max: maximum range values, array size
 *
 * Return: array pointer
 */

int *array_range(int min, int max)
{
	int *arr;
	int index;

	index = 0;

	if (min > max)
	{
		return (NULL);
	}
	else
	{
		arr = malloc(sizeof(int) * (max - min + 1));

		if (arr != NULL)
		{
			while (min <= max)
			{
				arr[index] = min++;
				index++;
			}
			return (arr);
		}
		return (NULL);
	}
}
