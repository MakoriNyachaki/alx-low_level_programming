#include <stdio.h>
/**
 * atoi - converts a string to an integer
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

	while (i < len && f == 0)
	{
		if (s[i] == '-')
			++d;

		if (s[i] >= '0' && s[i] <= '9')
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
    int sum, num, digit;

    sum = 0;

    if (argc > 1)
    {
        for (num = 1; num < argc; num++) /* index */
        {
            digit = atoi(argv[num]);
            if (digit >= 0) /* only positive integers*/
            {
                sum += digit;
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
    printf("Sum: %d\n", sum);

    return (0);
}