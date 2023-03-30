#include "main.h"
/**
 * cap_string - capitalize each word
 * @s: string to capitalize
 * Return: reulting string
 */
char *cap_string(char *s)
{
	int i, j;

	char special[13] = {' ', '\t', '\n', ',', ';', '.', '!',
		 '?', '"', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		if (i == 0 && s[i] >= 'a' && s[i] <= 'z')
			s[i] -= 32;

		for (j = 0; j < 13; j++)
		{
			if (s[i] == special[j])
			{
				if (s[i + 1] >= 'a' && s[i + 1] <= 'z')
				{
					s[i + 1] -= 32;
				}
			}
		}
	}
	return (s);
}
