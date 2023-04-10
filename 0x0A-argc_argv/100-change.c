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
	int change, index, res;
	int coins[] = {25, 10, 5, 2, 1};

	res = 0;

	if (argc < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	if (argc == 2)
	{
		change = atoi(argv[1]);
		for (index = 0; index < (*(&coins + 1) - coins) && change >= 0; index++)
		{
			while (change >= coins[index])
			{
				res++;
				change -= coins[index];
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", res);
	return (0);
}

