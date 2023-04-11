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
	while (s1[index] || s22[index])
	{
		len++;
		index++;
	}
	_str_concat = malloc(sizeof(char) * len);

	if (_str_concat == NULL)
	{
		return (NULL);
	}
	while (s1[index])
	{
		_str_concat[i++] = s1[index];
		index++;
	}
	while (s2[index])
	{
		_str_concat[i++] = s2[index];
		index++;
	}
	return (_str_concat);
}
