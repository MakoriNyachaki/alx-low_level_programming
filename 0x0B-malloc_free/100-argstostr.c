#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all your input arguments
 * @ac: argument count
 * @av: pointer to array of argumnents
 * Return: NULL if ac == 0 or av == NULL, pointer
 * to new string, NULL on fail
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int a, b, index, n;

	a = 0;
	b =  0;
	n = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; a < ac; a++)
	{
		b = 0;
		for (; av[a][b]; b++)
			n++;
		n++;
	}
	str = malloc((sizeof(char) * n) + 1);
	if (str != NULL)
	{
		for (; a < ac; a++)
		{
			for (; av[a][b]; b++)
			{
				str[index] = av[a][b];
				index++;
			}
			str[index] = '\n';
			index++;
		}
		str[index] = '\0';
		return (str);
	}
	else
	{
		return (NULL);
	}
}
