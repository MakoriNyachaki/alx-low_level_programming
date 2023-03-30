#include "main.h"
/**
 * _strcat - function to concatenate
 * @dest: first string
 * @src: second string
 * Return: concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int k, m;

	for (k = 0; dest[k] != '\0'; k++)
		;
	for (m = 0; src[m] != '\0'; m++)
	{
		dest[k] = src[m];
		k++;
	}
	return (dest);
}
