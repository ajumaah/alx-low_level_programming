#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter.
 * @array: array to execute
 * @size: the size of the array
 * @action: a pointer to the function you need to use
 *
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int k;

	if (action == NULL || array == NULL)
		exit(0);

	for (k = 0; k < size; k++)
		action(array[k]);
}
