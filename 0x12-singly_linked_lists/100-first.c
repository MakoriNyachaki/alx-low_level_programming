#include <stdio.h>

void _main(void) __attribute__((constructor));

/**
 * _main - executes first before main
 * and it prints some strings
 */

void _main(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
