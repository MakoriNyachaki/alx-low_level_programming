#include <stdio.h>

/**
 * main - Prints the number 00 to 89
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 < 9; digit1++)
	{
		digit2 = digit1 + 1;
		do {
			putchar('0' + digit1);
			putchar('0' + digit2);
			if (digit1 < 8)
			{
				putchar(',');
				putchar(32);
			}
			digit2++;
		} while (digit2 < 10);
	}
	putchar('\n');
	return (0);
}
