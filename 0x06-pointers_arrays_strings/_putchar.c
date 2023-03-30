#include <unistd.h>
/**
 * _putchar - write function
 * @c: character to print
 * Return: print character
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
