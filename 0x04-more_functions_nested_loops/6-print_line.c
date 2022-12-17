#include "main.h"

/**
 * print_line - draw a straight line
 * @n: the times a line is drawn
 *
 * Return: a line '_'
 */
void print_line(int n)
{
	int i;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (i = 1; i <= n; i++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}
