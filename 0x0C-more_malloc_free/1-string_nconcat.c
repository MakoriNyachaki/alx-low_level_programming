#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 *
 * @s1: first string
 * @s2: second string
 * @n: number of bytes of s2
 *
 * Return: pointer to newly allocated memory
 * or NULL if function fails
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int index, i, len0, len1;

	index = 0;
	i = 0;
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

	if (n < len1)
		str = malloc(sizeof(char) * (len0 + n + 1));
	else
		str = malloc(sizeof(char) * (len0 + len1 + 1));

	if (str == NULL)
		return (NULL);

	for (; i < len0; i++)
	{
		str[i] = s1[i];
	}
	while (n < len1 && i < (len0 + n))
		str[i++] = s2[index++];

	while (n >= len1 && i < (len0 + len1))
		str[i++] = s2[index++];

	str[i] = '\0';

	return (str);
}
