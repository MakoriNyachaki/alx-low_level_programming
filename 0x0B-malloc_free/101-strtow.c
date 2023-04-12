#include <stdlib.h>
#include "main.h"

/**
 * count_word - counts number of words
 * @s: string of words
 *
 * Return: number of words
 */

int count_word(char *s)
{
	int f, n, n_word;

	f = 0;
	n = 0;
	n_word = 0;

	for (; s[n] != '\0'; n++)
	{
		if (s[n] == ' ')
		{
			f = 0;
		}
		else if (f == 0)
		{
			f = 1;
			n_word++;
		}
	}
	return (n_word);
}
/**
 * strtow - split string into words
 * @str: string to be evaluated
 * Return: pointer to an array if successful
 * or NULL if error
 */
char **strtow(char *str)
{
	char **arr, *strs;
	int index, p = 0, r = 0, word, first, last, size = 0;

	while (*(str + size))
		size++;
	word = count_word(str);
	if (word != 0)
	{
		arr = (char **) malloc(sizeof(char *) * (word + 1));
		if (arr != NULL)
		{
			for (index = 0; index <= size; index++)
			{
				if (str[index] == ' ' || str[index] == '\0')
				{
					if (r)
					{
						last = index;
						strs = (char *) malloc(sizeof(char) * (r + 1));
						if (strs != NULL)
						{
							while (first < last)
								*strs++ = str[first++];
							*strs = '\0';
							arr[p] = strs - r;
							p++;
							r = 0;
						}
						return (NULL);
					}
				}
				else if (r++ == 0)
					first = index;
			}
			arr[p] = NULL;
			return (arr);
		}
		return (NULL);
	}
	return (NULL);
}
