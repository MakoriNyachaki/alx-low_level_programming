#include "main.h"

void makori(void) __attribute__((constructor)) makori(void);

/**
 * makori - executes first before main
 * and it prints some strings
 */

void makori(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
