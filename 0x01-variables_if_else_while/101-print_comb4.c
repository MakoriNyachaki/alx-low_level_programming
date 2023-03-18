/**
 * main - The success combination in business is
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	int num1;
	int num2;
	int num3;

	for (num3 = 0 ; num3 != 8 ; num3++)
	{
		for (num1 = h + 1 ; num1 != 9 ; num1++)
		{
			num2 = num1 + 1;
			do {
				putchar('0' + num3);
				putchar('0' + num1);
				putchar('0' + num2);
				if (num3 != 7)
				{
					putchar(',');
					putchar(32);
				}
				num2++;
			} while (num2 != 10);
		}
	}
	putchar('\n');
	return (0);

}
