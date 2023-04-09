#include "main.h"
#include <stdio.h>
/**
 * main - prints all the arguments it receives
 * @argc: Number of arguments
 * @argv: array of the arguments
 * Return: Always 0 for success
 */
int main(int argc, char *argv[])
{
	int count;

	for (count  = 1; count <= argc; count++)
	{
		printf("%s\n", argv[count]);
	}
	return (0);
}
