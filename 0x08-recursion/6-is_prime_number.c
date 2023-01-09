#include "main.h"
#include <stdio.h>

/**
 * is_prime_number - check if a number is prime
 * @n: number to check
 *
 * Return:one if prime else 0
 */

int is_prime(int n, int i);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return(is_prime(n, n - 1));
}

/**
 * is_prime - check if is prime
 * @n: first number
 * @i: second number
 *
 * Return:  1 else 0
 */
int is_prime(int n, int i)
{
	if (i == 1)
		return(1);
	else if (n % i == 0)
		return (0);
	else if (n % i != 0)
		return (is_prime(n, i - 1));
	return (0);
}
