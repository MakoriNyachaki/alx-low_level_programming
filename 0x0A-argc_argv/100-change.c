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
	int change;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	change = _atoi(argv[1]);
	while (change !< 1)
	{
		coins ++;
		switch ((change))
		{
			case ((change - 25) >= 0):
				change -= 25;
				continue;
			case ((change - 10) >= 0)):
				change -= 10;
				continue;
			case ((change - 5) >= 0):
				change -= 5;
				continue;
			case ((change - 2) >= 0):
				change -= 2;
				continue;

			change--;
		}
	printf("%d\n", coins);
	return (0);
}
