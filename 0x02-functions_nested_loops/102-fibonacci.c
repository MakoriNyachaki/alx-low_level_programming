#include <stdio.h>
/**
 * main - entry point
 * Return: 0 successful
 */
int main(void)
{
	int f1, f2, n;

	f1 = 1;
	f2 = 2;
	n = 1;
	printf("%d, %d\n", f1, f2);
	while (n <= 50)
	{
		unsigned long f3;

		printf("%lu, ", f3);
		/* @f3: Next term */
		f3 = f1 + f2;
		f1 = f2;
		f2 = f3;
		n++;
	}
	return (0);
}
