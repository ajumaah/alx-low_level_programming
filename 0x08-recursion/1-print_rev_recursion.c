#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion _ prints a string in reverse
 * @s: string to print
 *
 * Return: string in reverse
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
		_print_rev_recursion(s + 1);
	else
		return;
	_putchar(*s);
}
