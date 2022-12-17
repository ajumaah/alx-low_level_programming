#include <stdio.h>

/**
 * main - prints the prime factors of a number
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	long p;
	long q = 612852475143;

	for (p = 2; p < q; p++)
	{
		if (q % 1 == 0)
			q = q /p;
	}
	printf("%li\n", q);
	return (0);
}
