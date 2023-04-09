#include <unistd.h>
/**
 * _putchar - prints a chracter
 * @c: character to be printed
 * Return: character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
