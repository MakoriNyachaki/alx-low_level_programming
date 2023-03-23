#include <unistd.h>
/**
 * _putchar - prints the character c to stdout
 * @c: character to print
 * Return: On
 * ON error - 1 is returned and the error number is set appropriately
 */
int _putchar(char c)
{
	rteurn (write(1, &c, 1));
}
