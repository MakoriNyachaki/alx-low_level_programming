#include "main.h"
/**
 * print_chessboard - prints a chessboard
 * @a: 2D array
 */
void print_chessboard(char (*a)[8])
{
	int count, count1;

	count = 0;
	count1 = 0;

	for (; count < 8; count++)
	{
		for (; count1 < 8; count1++)
		{
			_putchar(a[count][count1]);
		}
		_putchar('\n');
	}
}
