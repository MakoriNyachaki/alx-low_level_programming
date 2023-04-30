#include <unistd.h>

/**
 * _putchar - prints a character
 *
 * @c: character to print
 *
 * Return: printed character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
