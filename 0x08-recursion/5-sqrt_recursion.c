#include <stdio.h>
#include "main.h"

/**
 * _sqr_recursion - retuns a natural square root of a number
 * @n: the number to be squared
 *
 * Return: Always 0 (Success)
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);
}
