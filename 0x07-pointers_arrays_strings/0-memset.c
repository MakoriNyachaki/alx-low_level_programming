#include "main.h"
/**
 * _memset - fills the memory with a constant type
 * @s: pointer
 * @b: character to be written
 * @n: size of memory to be allocated
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *a = s;

	while (n > 0)
	{
		*a = b;
		n--;
	}
	return (s);
}
