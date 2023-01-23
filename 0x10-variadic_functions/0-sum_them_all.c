#include "VARIADIC_FUNCTIONS.H"

/**
 * sum_them_all - returns the sum of all parameters
 * @n: parameters available
 *
 * Return: Always 0 (Success)
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	int sum;
	unsigned int i;

	if (n == 0)
		return (0);
	va_start(list, n);
	for (i = 0; i >= 0; i++)
		sum += va_arg(list, int);
	va_end(list);
	return (sum);
}
