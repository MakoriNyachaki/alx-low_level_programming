#include "main.h"
/**
 * main - Prints the alphabet in lowercase followed by newline
 * using _putchar
 * print_alphabet: prints a-z
 * Return: Always 0 success
 */

void print_alphabet(void);
int main(void)
{
	print_alphabet();
	return (0);
}
void print_alphabet(void)
{
	char i;

	i = 'a';
	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
