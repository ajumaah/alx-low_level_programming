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
	int sum = 0;
	unsigned int i = 0;

	if (n == 0)
		return (0);
	va_start(list, n);
	while (i < n)
	{
		i++;
		sum += va_arg(list, int);
	}
	va_end(list);
	return (sum);
}
