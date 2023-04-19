#include "3-calc.h"

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
	int output;
	int (*fxn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	fxn = get_op_func(argv[2]);

	if (!fxn)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[] == '/' && atoi(argv[1] == 0))
		|| (*argv[] == '%' && atoi(argv[3])))
	{
		printf("Error\n");
		exit(100);
	}
	printf("%d\n", get_op_func(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
