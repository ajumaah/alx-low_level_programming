#include "main.h"

/**
 * print_number - prints char
 * @n: integer
 *
 * Return: Always 0 (Success)
 *
 */

void print_number(int n)
{
	unsigned int j;
	j = n;

	if (n < 0)
	{
		_putchar('-');
		j = j - n;
	}
	if (j / 10 != 0)
	{
		print_number(j / 10);
	}
	_putchar((j % 10) + '0');
}
