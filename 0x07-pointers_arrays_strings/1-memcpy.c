#include "main.h"
/**
 * _memcpy - Copies memory area
 * @dest: pointer the memory area
 * @src: input source
 * @n: memory size to copy to
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char a = dest;

	while (n > 0)
	{
		*dest = *src;
		*src++;
		n--;
	}
	return (dest);
}
