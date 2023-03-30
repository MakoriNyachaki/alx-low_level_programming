#include "main.h"
/**
 * leet - encodes a string in 1337
 * @p: string to be encoded
 * Return: string
 */

char *leet(char *p)
{
	int i, j;

	char *a = "aAeEoOtTlL";
	char *b = "4433007711";

	for (i = 0; p[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (p[i] == a[j])
			{
				p[i] = b[j];
			}
		}
	}
	return (p);
}
