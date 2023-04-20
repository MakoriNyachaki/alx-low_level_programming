#include <unistd.h>

/**
 * _putchar - prints a charcater
 * @c: character
 *
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
