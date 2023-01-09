#include <stdio.h>
#include "main.h"

/**
 * _sqr_recursion - retuns a natural square root of a number
 * @n: the number to be squared
 *
 * Return: Always 0 (Success)
 */

int sqr_odd(int a, int n);
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);
	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqr = _sqrt_recursion(n / 2);
		if (n / sqr == sqr)
			return (sqr);
		else if (sqr > 1)
			return (sqr * 2);
		return (-1);
		else
		{
			return (sqr_odd(n, n - 2));
		}
	}
}

/**
 * sqr_odd - check for prime  odd numbers
 * @a: the prime or odd number to be checked
 * @n: the number to find its square root
 *
 * Return: square root
 */
int sqr_odd(int a, int n)
{
	if (n < 0)
		return (-1);
	else if (a == n * n)
		return (n);
	else
		return (sqr_odd(a, n - 2));
}
