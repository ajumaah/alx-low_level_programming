#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes
 * @c: char in the array
 * @size: array size
 *
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int j;
	char *array = NULL;

	if (size != 0)
	{
		array = (char *)malloc(size * sizeof(char));
		if (array != NULL)
		{
			for (j = 0; j < size; j++)
				array[j] = c;
		}
	}
	if (size == 0)
		return (NULL);
	return (array);
}
