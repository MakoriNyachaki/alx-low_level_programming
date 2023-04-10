#include <stdio.h>
/**
 * atoi - converts a string into an integer
 * @s: string
 * Return: integer
 */
int atoi(char *s)
{
	int i, d, n, len, f, digit;

	i = 0;
	d = 0;
	n = 0;
	len = 0;
	f = 0;
	digit = 0;

	while (s[len] != '\0')
		len++;

	while (s < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i + 1] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (d % 2)
				digit = -digit;
			n = n * 10 + digit;
			f = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			f = 0;
		}
		i++;
	}
	if (f == 0)
		return (0);

	return (n);
}
/**
 * main - add positive integers
 * @argc: number of arguments
 * @argv: argumets array
 * Return: 0 for success, othewise 1
 */

int main(int argc, char *argv[])
{
	int sum, num, index;

	sum = 0;

	if (argc > 1)
	{
		for (index = 1; index < argc; index++)
		{
			num = atoi(argv[index]);
			if (num >= 0)
			{
				sum += num;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	}
	else
	{
		printf("Error\n");
		return (1);
	}
	printf("%d\n", sum);
	return (0);
}
