#include <stdio.h>
#include "main.h"
/**
 * main - funds the result of a multiplication
 * @argc: number of arguments
 * @argv: array of arguments
 * Return: Always 0 for success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int num1, num2, res;

	if (argc < 3 || argc > 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = _atoi(argv[1]);
		num2 = _atoi(argv[2]);

		res = num1 * num2;
		printf("%d\n", res);
	}
	return (0);
}
