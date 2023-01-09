#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - returns the length of a string
 * @s: the string to get its length
 *
 * Return: string length
 */

int _strlen_recursion(char *s)
{
	int j = _strlen_recursion;

	if (*s == '\0')
		return (0);
	else
		return (1 + j(s + 1));
}
