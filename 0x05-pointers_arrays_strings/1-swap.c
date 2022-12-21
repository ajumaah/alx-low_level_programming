#include "main.h"

/**
 * swap_int - function that swaps
 * @a: first number
 * @b: second number
 *
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
