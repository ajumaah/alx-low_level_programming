#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: value to be allocated
 *
 * Return: void
 */

void *malloc_checked(unsigned int b)
{
	unsigned int a;

	a = malloc(b);
	if (a == NULL)
		exit(98);
	return (a);
}
