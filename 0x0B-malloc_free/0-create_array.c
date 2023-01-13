#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars and initializes it with a specific char
 * @c: char in the array
 *
 * Return: void
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
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
