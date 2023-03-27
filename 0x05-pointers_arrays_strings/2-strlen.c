#include "main.h"
/**
 * _strlen - finds the lenght of a string
 * @s: string
 * Return: 0
 */
int _strlen(char *s)
{
	char *i = s;

	while (*i != '\0')
	{
		i++;
	}
	return (i - s);
}
