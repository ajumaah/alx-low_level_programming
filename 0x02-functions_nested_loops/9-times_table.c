#include "main.h"

/**
 * times_table - prints the 9 times table starting with 0
 * Return: void
 */
void times_table(void)
{
	int row, col, num;

	for (row = 0; row <= 9; row++)
	{
		_putchar('0');
		for (col = 1; col <= 9; col++)
		{
			_putchar(',');
			_putchar(' ');
			num = row * col;
			if (num <= 9)
				_putchar(' ');
			else
				_putchar((num / 10) + '0');
			_putchar((num % 10) + '0');
		}
		_putchar('\n');
	}
}
