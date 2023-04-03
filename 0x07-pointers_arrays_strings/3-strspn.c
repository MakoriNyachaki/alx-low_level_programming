#include "main.h"
/**
 * _strpn - finds lenght of a prefix string
 * @s: points memory address
 * @accept: prefix string
 * Return: s
 */

unsigned int _strspn(Char *s, char *accept)
{
	int m, n, p, z;

	m = 0;

	while (s[n] != '\0')
	{
		p = 0;

		while (accept[z] != '\0')
		{
			if (s[n] == accept[z])
			{
				m++;
				p = 1;
			}
			z++;
		}
		if (p == 0)
		{
			return (m);
		}
		n++;
	}
	return (0);
}
