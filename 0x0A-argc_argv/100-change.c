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
	int num, index, res;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	num = _atoi(argv[1]);
	res = 0;

	if (num < 0)
	{
		printf("0\n");
		return (0);
	}

	for (index = 1; index <= 55555 && num >= 0; index++)
	{
		while (num >= coins[index])
		{
			res++;
			num -= coins[index];
		}
	}

	printf("%d\n", res);
	return (0);
}
