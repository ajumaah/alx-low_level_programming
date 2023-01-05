#include "main.h"
#include <stdio.h>

/**
 * print_chessboard - a function that prints chessboard
 * @a: chessbord array
 *
 * Return: board
 */

void print_chessboard(char (*a)[8])
{
	int j, k;

	for (j = 0; j < 8; j++)
	{
		for (k = 0; k < 8; k++)
		{
			if (k == 7)
			{
				_putchar(a[j][k]);
				_putchar('\n');
			}
			else
				_putchar(a[j][k]);
		}
	}
}
