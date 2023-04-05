#include "main.h"
#include "math.h"
/**
 * _pow_recursion - find the power
 * @x: number
 * @y: power
 * Return: -1, 1 or power
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
