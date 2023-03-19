#include <stdio.h>

/**
 * main - Prints all possible combinations of three different digits,
 *        in ascending order, separated by a comma followed by a space.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num1, num2, num3, num4;

	for (num1 = 0 ; num1 < 10 ; num1++)
	{
		for (num2 = 0 ; num2 <= 10 ; num2++)
		{
			putchar('0' + num1);
			putchar('0' + num2);
			if (num1 <= 9 && num2 < 10)
			{
				putchar(',');
				putchar(32);
			}
			num2++;
		}
	}
	putchar('\n');
	return (0);
}

