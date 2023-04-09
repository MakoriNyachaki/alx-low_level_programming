#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints minimum coins to make change for
 * @argc: number of arguments
 * @argv: arguments array
 * Return: Always 0 for success, otherwise 1
 */

int main(int argc, char *argv[])
{
	int x, y, res;
	int coins[] = {25, 10, 5, 2, 1};

	y = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	x = _atoi(argv[1]);
	res = 0;

	if (x < 0)
	{
		printf("0\n");
		return (0);
	}

	while (y < 5 && x >= 0)
	{
		while (x >= coins[y])
		{
			res++;
			x -= coins[y];
		}
		y++;
	}

	printf("%d\n", res);
	return (0);
}
