#include "main.h"
#include <stdlib.h>
/**
 * create_array -creates an array of chars,:wq
 *
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character of the array
 * Return: NULL if size is 0 or it fails, pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int index;
	char *arr;

	index = 0;

	if (size == 0)
		return (NULL);

	arr = malloc(size * sizeof(char));

	if (arr != NULL)
	{
		while (index < size)
		{
			arr[index] = c;
			index++;
		}
	}
	else
	{
		return (NULL);
	}
	return (arr);
}

