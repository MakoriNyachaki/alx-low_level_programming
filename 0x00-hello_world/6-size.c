#include <stdio.h>
/**
 * main - Print size of various types
 * Return: Always 0 (Success)
 */
int main(void)
{

	int m;
	long int n;
	long long int p;
	char q;
	float r;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(m));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(n));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(p));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(r));
	return (0);

}
