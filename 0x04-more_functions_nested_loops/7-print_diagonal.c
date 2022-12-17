#include "main.h"

/**
 * print_diagonal - draws a diagonal line 
 * @n: line to be drawn
 * 
 * Return: a diagonal line
 */
void print_diagnal(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 1; x <= n; x++)
		{
			_putchar('\');
		}
		_putchar('\n');
	}
}
