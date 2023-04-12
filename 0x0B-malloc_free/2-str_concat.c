#include "main.h"
#include <stdlib.h>

/**
 * str_concat - a function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string or NULL on failure
 */

char *str_concat(char *s1, char *s2)
{
	int index, i, len;
	char *_str_concat;

	index = 0;
	i = 0;
	len = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (; s1[index] || s2[index]; index++)
	{
		len++;
	}
	_str_concat = malloc(sizeof(char) * len);

	if (_str_concat == NULL)
	{
		return (NULL);
	}
	else
	{
		for (; s1[index]; index++)
		{
			_str_concat[i++] = s1[index];
		}
		for (; s2[index]; index++)
		{
			_str_concat[i++] = s2[index];
		}
		return (_str_concat);
	}
}
