#include <stdio.h>
#include "main.h"
/**
 * char *_strchr - locates character in a string
 * @s: pointer to the character
 * @c: located character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	int r;

	if (s != '\0')
	{
		return (NULL);
	}
	else
	{
		while (1)
		{
			r = *s++;
			if (r == c)
			{
				return (s - 1);
			}
		}
	}
}
