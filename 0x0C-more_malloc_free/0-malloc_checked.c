#include <stdlib.h>
#include <stdio.h>
#include "main.h"
/**
 * malloc_checked - Entry Point
 * @b: input amount
 * Return: pointer to new mem
 */
void *malloc_checked(unsigned int b)
{
	void *d;

	d = malloc(b);

	if (d == NULL)
		exit(98);
	return (d);
}
