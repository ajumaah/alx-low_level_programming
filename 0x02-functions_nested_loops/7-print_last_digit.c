#include "main.h"

/**
 *print_last_digit - print the last digit
 * @v: the number to print
 * Return: the vale of the last digit
 */
int print_last_digit(int v)
{
	int k = v % 10;

	if (k < 0)
		k += -1;

	_putchar(k + '0');
	return (0);
}
