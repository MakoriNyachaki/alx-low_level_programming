#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * main - programs' entry point
 * performing mathematical operations
 *
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	char operation;

	operation = argv[2];

	int (*func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	else
	{
		func = get_op_func(operation);

		if (!func)
		{
			printf("Error\n");
			exit(99);
		}
	}
	printf("%d\n", func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}


