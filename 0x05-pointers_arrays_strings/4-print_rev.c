#include "main.h"

/**
 * print_rev - prints in reverse followed with a new line
 * @s: string to be printed in reverse
 *
 * Return: string in reverse
 */

void print_rev(char *s)
{
	int i;

	i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (>= 0)
	{
		i--;
		_putchar(s[i]);
	}
	_putchar('\n');
}

