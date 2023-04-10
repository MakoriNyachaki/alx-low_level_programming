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
	int sum, num1, num2, num3, num4;

	sum = 0;
	for (num1 = 1; num1 < argc; num1++)
	{
		for (num2 = 0; argv[num1][num2] != '\0'; num2++)
		{
			if (argv[num1][num2] > '9' || argv[num1][num2] < '0')
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (num3 = 1; num3 < argc; num3++)
	{
		num4 = atoi(argv[num3]);
		if (num4 >= 0)
		{
			sum += num4;
		}
	}
	printf("%d\n", sum);
	return (0);
}
