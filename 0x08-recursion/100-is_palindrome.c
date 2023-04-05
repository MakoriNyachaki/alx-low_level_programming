#include "main.h"

int str_pal(char *s, int y, int l);
int _strlen(char *s);

/**
 * is_palindrome - determines whetjer a char is a palindrome
 * @s: character
 * Return: 0, 1
 */

int is_palindrome(char *s)
{
	if (*s == 0)
		return (1);
	return (str_pal(s, 0, _strlen(s)));
}
/**
 * _strlen - finds length of the string
 * @s: string
 * Return: lenght of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * str_pal - checks if string is palindrome recursively
 * @s: string
 * @y: iteration
 * @l: string length
 * Return: 0, 1, result
 */

int str_pal(char *s, int y, int l)
{
	if (*(s + y) != *(s + l - 1))
		return (0);
	if (y > l)
		return (1);
	return (str_pal(s, y + 1, l - 1));
}
