#include "main.h"
/**
 * string_toupper - changes string to upper
 * @q: string to cahnge
 * Return: q if successful
 */

char *string_toupper(char *q)
{
	int i;

	for (i = 0; q[i] != '\0'; i++)
	{
		if (q[i] >= 'a' && q[i] <= 'z')
			q[i] = q[i] - 32;
	}
	return (q);
}
