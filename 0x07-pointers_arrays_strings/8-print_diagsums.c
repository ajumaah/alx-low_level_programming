#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix of integers
 * @a: diagonals
 * @size: integer
 *
 * Return: void
 */

void print_diagsums(int *a, int size)
{
	int j, k, l =  0, m = 0;

	for (j = 0; j <= (size * size); j += size + 1)
		l += a[j];
	for (k = size -1; k <= (size * size) - size; k += size -1)
		m += a[k];
	printf("%d, %d\n", l, m);
}
