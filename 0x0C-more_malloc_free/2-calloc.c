#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "main.h"

/**
 * _calloc - locate memory
 * @nmemb: array to get memory
 * @size: size of memory needed
 *
 * Return: Void
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int j;
	char *array;

	if (nmemb == 0 || size == 0)
		return (NULL);
	array = malloc(nmemb * size);
	if (array == NULL)
		return (NULL);
	for (j = 0; j < (nmemb * size); j++)
		array[j] = 0;
	return (array);
}
