#include "main.h"

/**
 *print_last_digit - print the last digit
 * @nvl: the number to print
 * Return: the vale of the last digit
 */
int print_last_digit(int nvl)
{
	int vld;

	vld = (nvl % 10);

	if (vld < 0)
	{
		vld = (-1 * vld);
	}
	_putchar(vld + '0');
	return (vld);
}
