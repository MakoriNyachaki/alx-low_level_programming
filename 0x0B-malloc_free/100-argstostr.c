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
	while (a < ac)
	{
		while (av[a][b])
		{
			n++;
			b++;
		}
		n++;
		a++;
	}

	str = malloc((sizeof(char) * n) + 1);

	if (str == NULL)
		return (NULL);
	while (a < ac)
	{
		while (av[a][b])
		{
			str[index] = av[a][b];
			b++;
			index++;
		}
		str[index] = '\n';
		index++;
		a++;
	}
	str[index] = '\0';
	return (str);
}
