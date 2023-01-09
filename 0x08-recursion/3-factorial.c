#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 * @n: the number to be checked
 *
 * Return: Always 0 (Success)
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));
}
