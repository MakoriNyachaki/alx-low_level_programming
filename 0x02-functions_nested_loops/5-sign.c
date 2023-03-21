#inclued "main.h"
/**
 * print_sign - Prints the sign of a number
 * @n: number whose sign to be found
 * Return: 1 if +, 0 if 0 and -1 if _
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(48);
		return (0);
	}
	else if (n < 0)
	{
		_putchar('-');
	}
	return (-1);
}
