#include "main.h"
/**
 * factorial - finds a factorial of number
 * @n: number to find its factorial
 * Return: -1 or 1 or factorial
 */
int factorial(int n)
{
	if (n < 0)
		return (-1); 
	if  (n <= 1)
		return (1);
	return (n * factorial(n - 1));
}
