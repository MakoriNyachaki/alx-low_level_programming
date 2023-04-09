#include "main.h"
#include <stdio.h>
/**
 * _strpbrk - Searches any set bytes in a string
 * @s: string to search
 * @accept: String which contain the bytes
 * Return: s or NULL
 */

char *_strpbrk(char *s, char *accept)
{
	int m, n;

	m = 0;
	n = 0;

	for (; *s != '\0'; m++)
	{
		while (accept[n] != '\0')
		{
			if (*s == accept[n])
				return (s);
			n++;
		}
		s++;
	}
	return (NULL);
}
