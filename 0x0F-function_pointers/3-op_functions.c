#include "3-calc.h"

/**
 * op_add - adds two numbers and returns their sum
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: their sum
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - finds and returns the difference of 2 integers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiplies two numbers and returns result
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - divides 2 integers and returns result
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: result
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns the remainder of division of
 * 2 numbers
 *
 * @a: first integer
 * @b: second integer
 *
 * Return: remainder
 */

int op_mod(int a, int b)
{
	return (a % b);
}
