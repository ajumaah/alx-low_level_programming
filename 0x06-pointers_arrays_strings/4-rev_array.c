#include "main.h"

/**
 * reverse_array - a function that reverses content of an a rray
 * @a: array content
 * @n: elements in an array
 *
 * Return: Always 0 (Success)
 */

void reverse_array(int *a, int n)
{
	int j, k;

	for (j = 0; j < n ; j++)
	{
		n--;
		k = a[j];
		a[j] = a[n];
		a[n] = k;
	}
}
