#include <unistd.h>

/**
 * _putchar - a function that prints character
 * @c: character to print
 * Return: c
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
