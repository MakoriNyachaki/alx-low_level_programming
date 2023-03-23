#include "main.h"
/**
 * print_number - prints a number
 * @n: Input number
 */

void print_number(int n)
{
	long len, result, i, tempo, pow;

	result = n;
	pow = len =  1;
/*Check negatives*/
	if (result < 0)
	{
		result *= -1;
		_putchar('-');
	}

/**/
	tempo = result;
	while (tempo >= 10)
	{
		len++;
		tempo /= 10;
	}

/*Create Exponent*/
	for (i = 1; i < len; i++)
		pow *= 10;
/*Main */
	while (pow > 1)
	{
		_putchar((result / pow) % 10 + '0');
		pow /= 10;
	}
	_putchar(result % 10 + '0');
}
