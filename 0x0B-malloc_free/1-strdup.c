#include "main.h"
#include <stdlib.h>
/**
 * _strdup -a function that returns a pointer to
 * a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 *
 * @str: string to be returned
 *
 * Return: Pointer to memory if success, NULL otherwise
 */
char *_strdup(char *str)
{
	char *dup;
	int index, count;

	index = 0;
	count = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (str[index])
		count++;

	dup = malloc(sizeof(char) * (count + 1));

	if (dup == NULL)
		return (NULL);

	while (index < count)
	{
		*(dup + index) = *(str + index);
		index++;
	}
	return (dup);
}
