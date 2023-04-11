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
	int index, len;

	index = 0;
	len = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		dup = malloc(sizeof(char) * (len + 1));
		if (dup != NULL)
		{
			while (str[index])
			{
				len++;
				dup[index] = str[index];
				index++;
			}
		}
		else
		{
			return (NULL);
		}
	}
	dup[len] = '\0';

	return (dup);
}
