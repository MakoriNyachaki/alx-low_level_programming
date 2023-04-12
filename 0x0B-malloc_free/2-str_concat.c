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
	int index, i, len0, len1;
	char *_str_concat;

	len0 = 0;
	len1 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len0))
		len0++;
	while (*(s2 + len1))
		len1++;

	_str_concat = malloc(sizeof(char) * (len0 + len1 + 1));

	if (_str_concat != NULL)
	{
		while (index < len0)
		{
			*(_str_concat + index) = *(s1 + index);
			index++;
		}
		while (i < len1)
		{
			*(_str_concat + 1) = *(s2 + i);
			i++;
		}
		return (_str_concat);
	}
	else
		return (NULL);
}
