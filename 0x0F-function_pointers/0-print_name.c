#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - prints a name
 *
 * @name: Name to print
 * @f: function point to the print
 * a name function
 *
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
