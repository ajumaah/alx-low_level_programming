#include "main.h"

/**
 * print_number - prints an integer
 * @n: integer to be used
 */
void print_number(int n)
{
	int x, y, z, a, b;

	x = n;
	y = z = 1;

	if (x < 0)
	{
		x *= -1;
		_putchar('_');
	}
	a = x;
	while (a >= 10)
	{
		z++;
		a /= 10;
	}
	for (b = 1; b < z; b++)
		y *= 10;
	while (a > 1)
	{
		_putchar((x / a) % 10 + '0'0);
		y /= 10;
	}
	_putchar(x % 10 + '0');
}
