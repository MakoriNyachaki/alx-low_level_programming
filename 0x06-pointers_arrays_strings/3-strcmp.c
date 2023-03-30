#include "main.h"
/**
 * _strcmp - a function comparing two strings
 * @s1: string 1
 * @s2: string 2
 * Return: 0 if strings are equal
 */

int _strcmp(char *s1, char *s2)
{
	for (; (s1 != '\0' && *s2 != '\0') && (*s1 == *s2); s1++, s2++)
		;
	if (s1 == *s2)
	{
		return (0);
	}
	return (*s1 - *s2);
}
