#include "main.h"
/**
 * *_memcpy - cpies a memory area
 * @dest: destination area
 * @src: source to be copied
 * @n: number of bytes to copy
 * Return: dest pointer
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int m;

	for (m = 0; m < n; m++)
	{
		dest[m] = src[m];
	}
	return (dest);
}
