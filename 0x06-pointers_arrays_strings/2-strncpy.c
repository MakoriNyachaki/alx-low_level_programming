#include "main.h"
/**
 * _strncpy - function to copy a string
 * @dest: string
 * @src: source string
 * @n: integer on how to copy
 * Return: copied text
 */

char *_strncpy(char *dest, char *src, int n)
{
	int index;

	for (index = 0; index < n && src[index] != '\0'; index++)
	{
		dest[index] = src[index];
	}
	for (index = 0; index < n; index++)
	{
		dest[index] = '\0';
	}
	return (dest);
}
