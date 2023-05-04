#ifndef BITWISE_OPS_H
#define BITWISE_OPS_H

/* Includes from the standard libraries */

	#include <stdio.h>
	#include <stdlib.h>

/* Function Prototypes */

	int _putchar(char c);
	unsigned int binary_to_uint(const char *b);
	void print_binary(unsigned long int n);
	int get_bit(unsigned long int n, unsigned int index);
	int set_bit(unsigned long int *n, unsigned int index);
	int clear_bit(unsigned long int *n, unsigned int index);
	unsigned int flip_bits(unsigned long int n, unsigned long int m);
	int get_endianness(void);

#endif /* End BITWISE_OPS_H */
