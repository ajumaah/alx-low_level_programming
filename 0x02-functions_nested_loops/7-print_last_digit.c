#include "main.h"

/**
 *print_last_digit - print the last digit
 * @v: the number to print
 * Return: the vale of the last digit
 */
int print_last_digit(int v)
{
	int v;

	v = (v % 10);

	if (v < 0)
	{
		v = (-1 * v);
	}
	
	_putchar(v + '0');
	return (v);
}
