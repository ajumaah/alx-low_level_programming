#include <stdio.h>
#include "main.h"

/**
 * _sqrt_recursion - retuns a natural square root of a number
 * @n: the number to be squared
 * @a: the prime or odd number to be checked
 *
 * Return: Always 0 (Success)
 */

int sqrt_prime_odd(int a, int n);
int _sqrt_recursion(int n)
{
	int sqrt;

	if (n < 0)
		return (-1);
	else if (n <= 1 && n >= 0)
		return (n);
	if (!(n % 2))
	{
		if (n / 2 == 2 || n == 2)
			return (2);
		sqrt = _sqrt_recursion(n / 2);
		if (n / sqrt == sqrt)
			return (sqrt);
		else if (sqrt > 1)
			return (sqrt * 2);
		return (-1);
	}
	else
		{
			return (sqrt_prime_odd(n, n - 2));
		}
}
/**
 * sqrt_prime_odd - check for prime  odd numbers
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
