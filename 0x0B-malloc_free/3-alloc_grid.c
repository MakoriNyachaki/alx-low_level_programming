#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid -  function that returns a pointer
 * to a 2 dimensional array of integers.
 *
 * @width: width of the array
 * @height: height of array
 *
 * Return: NULL
 */
int **alloc_grid(int width, int height)
{
	int **array;
	int h, w;

	h = 0;
	w = 0;

	if (height <= 0 || width <= 0)
	{
		return (NULL);
	}
	else
	{
		array = (int **) malloc(sizeof(int *) * height);
		if (array != NULL)
		{
			while (h < height)
			{
				array[h] = (int *) malloc(sizeof(int) * width);
				if (array[h] == NULL)
				{
					free(array);
					for (; w <= h; w++)
						free(array[w]);
					return (NULL);
				}
				h++;
			}
			while (h < height)
			{
				for (; w < width; w++)
					array[h][w] = 0;
				h++;
			}
		}
		else
		{
			return (NULL);
		}
		return (array);
	}
}
