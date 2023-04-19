#include "3-calc.h"

/**
 * op_add - adds two numbers and returns their sum
 *
 * @a: a
 * @b: b
 *
 * Return: a + b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds and returns the difference of 2 integers
 *
 * @a: a
 * @b: b
 *
 * Return: a - b
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers and returns result
 *
 * @a: a
 * @b: b
 *
 * Return: a * b
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers and returns result
 *
 * @a: a
 * @b: b
 *
 * Return: a / b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of
 * 2 numbers
 *
 * @a: a
 * @b: b
 *
 * Return: a % b
 */

int op_mod(int a, int b)
{
	if (b != 0)
		return (a % b);
}
