#include "main.h"

int prime_number(int n, int y);
/**
 * is_prime_number - determines if a prime number
 * @n: number to be determined
 * Return: 0 or 1;
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_number(n, n - 1));
}
/**
 * prime_number - gets real prime number
 * @n: integer to be considered
 * @y: iteration
 * Return: 1 or 0
 */

int prime_number(int n, int y)
{
	if (y == 1)
		return (1);
	if (n % y == 0 && y > 0)
		return (0);
	return (prime_number(n, y - 1));
}
