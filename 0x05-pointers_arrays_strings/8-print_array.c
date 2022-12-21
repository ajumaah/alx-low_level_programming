#include <stdio.h>
#include "main.h"

/**
 * print_arry - print n elemtents in an array
 * @a: array with numbers
 * @n: elements in an array
 *
 * Return: void
 */

void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%d", a[b]);

		if (b != (n - 1))
		{
			printf(", ");
		}
	}
	printf('\n');
}
