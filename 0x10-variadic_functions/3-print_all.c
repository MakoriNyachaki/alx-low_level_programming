#include "variadic_functions.h"


/**
 * _integer - prints a value of integer type
 *
 * @n: integer
 */

void _integer(va_list n)
{
	printf("%d", va_arg(n, int));
}

/**
 * _character - print character
 *
 * @vl_char: va_list
 */

void _character(va_list vl_char)
{
	printf("%c", va_arg(vl_char, int));
}

/**
 * _float - prints float value
 *
 * @vl_fl: va_lisst
 */

void _float(va_list vl_fl)
{
	printf("%f", va_arg(vl_fl, double));
}

/**
 * _string - prints string
 *
 * @vl_str: va_list
 */

void _string(va_list vl_str)
{
	if (!(va_arg(vl_str, char *)))
		printf("nil");
	printf("%s", va_arg(vl_str, char *));
}


/**
 * print_all - a funtion that prints anything
 *
 * @format: list of types of arguments passed
 * c:char
 * i:integer
 * float
 * s:char *
 */

void print_all(const char * const format, ...)
{
	va_list vl;
	unsigned int m, n;

	f_type _types[] = {
		{"c", _character},
		{"i", _integer},
		{"f", _float},
		{"s", _string}
	};

	va_start(vl, format);

	while (format && format[m])
	{
		while (_types[n].chr)
		{
			if (_types[n].chr[0] == format[m])
			{
				(_types[n].ptr)(vl);
				if (format[m + 1])
					printf(", ");
			}
			n++;
		}
		m++;
	}
	_putchar('\n');
	va_end(vl);
}
