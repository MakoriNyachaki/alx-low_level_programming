#include "main.h"

/**
 * get_endianness - checks the endianness
 *
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int n = 1;

	switch (*(char *)&n)
	{
		case 1:
			return (0);
		case 0:
			return (1);
	}
}
