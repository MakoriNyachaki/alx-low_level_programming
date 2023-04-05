#include "main.h"

int squareroot_recursion(int n, int y);

/**
 * _sqrt_recursion - finds the squareroot
 * @n: number to find sqrt for
 * Return: -1 if no sqrt or sqrt
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (squareroot_recursion(n, 0));
}

/**
 * squareroot_recursion - finds real squareroot through recursion
 * @n: number to find squareroot
 * @y: for iteration
 * Return: -1, y, squareroot_recursion
 */
int squareroot_recursion(int n, int y)
{
	if (y * y < n)
		return (-1);
	if (y * y == n)
		return (y);
	return (squareroot_recursion(n, y + 1));
}
