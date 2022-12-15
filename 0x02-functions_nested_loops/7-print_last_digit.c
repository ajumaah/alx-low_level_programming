#include "main.h"

/**
 *print_last_digit - print the last digit
 * @vl: the number to print
 * Return: the vale of the last digit
 */
int print_last_digit(int vl)
{
	int vl;

	v = (vl % 10);

	if (v < 0)
	{
		v = (-1 * v);
	}
	
	_putchar(v + '0');
	return (v);
}
