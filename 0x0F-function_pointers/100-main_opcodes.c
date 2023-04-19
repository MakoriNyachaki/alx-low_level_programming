#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own function
 *
 * @argc: number of arguments
 * @argv:array of arguments pased
 *
 * Return: Always 0
 */

int main(int argc, char **argv)
{
	int b, index;
	char *array;

	index = 0;

	if (arc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	array = (char *)main;

	while (index < b)
	{
		if (index == b - 1)
		{
			printf("%02hhx\n", array[index]);
			break;
		}
		printf("%02hhx ", array[index]);
		index++;
	}
	return (0);
}
