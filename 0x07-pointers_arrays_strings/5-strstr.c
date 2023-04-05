#include "main.h"
#include "stdio.h"
/**
 * _strstr - locates a substring from a string
 * @haystack: source string
 * @needle: substring to be searched
 * Return: pointer to the beginning of the the substring
 * or NULL if not available
 */
char *_strstr(char *haystack, char *needle)
{
	int i, m;

	i = 0;
	m = 0;

	while (haystack[i] != '\0')
	{
		while (needle[m] != '\0')
		{
			if (haystack[i + m] != needle[m])
				break;
			m++;
		}
		if (!needle[m])
			return (&haystack[i]);
		i++;
	}
	return (NULL);
}
