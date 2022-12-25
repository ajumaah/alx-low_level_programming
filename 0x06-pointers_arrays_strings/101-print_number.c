#include "main.h"

/**
 * print_number - a function that prints number chars
 * @n: integers to print
 *
 * Return: Always 0 (Success)
 */

void print_number(int n)
{
	unsigned int a = n;

	if (n < 0)
	{
		_putchar('-');
		a = a - n;
	}
	if (a / 10 !=0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
