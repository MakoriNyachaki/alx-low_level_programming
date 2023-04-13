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
	unsigned int index, i, len10, len11;

	index = 0;
	i = 0;
	len10 = 0;
	len11 = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + len10))
		len10++;
	while (*(s2 + len11))
		len11++;

	if (n < len11)
		str = malloc(sizeof(char) * (len10 + n + 1));
	else
		str = malloc(sizeof(char) * (len10 + len11 + 1));

	if (str == NULL)
		return (NULL);

	for (; i < len10; i++)
	{
		str[i] = s1[i];
	}
	while (n < len11 && i < (len10 + n))
		str[i++] = s2[index++];

	while (n >= len11 && i < (len10 + len11))
		str[i++] = s2[index++];

	str[i] = '\0';

	return (str);
}
