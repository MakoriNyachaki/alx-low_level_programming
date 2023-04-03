#include "main.h"
/**
 * char *_strchr - locates character in a string
 * @s: pointer to the character
 * @c: located character
 * Return: s or NULL
 */

char *_strchr(char *s, char c)
{
	char *r = '\0';

	if (s != '\0')
	{
		while (*s++)
		{
			if (*s == c)
			{
				r = s;
				break;
			}
		}
	}
	return (r);
}
