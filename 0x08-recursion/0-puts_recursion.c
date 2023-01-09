#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: string to print
 *
 * Return: Always 0 (Success)
 */
void _puts_recursion(char *s)
{
	if (!*s)
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_put_recursion((s + 1));
}
