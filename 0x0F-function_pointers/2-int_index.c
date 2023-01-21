#include "function_pointers.h"

/**
 * int_index - searches for integer
 * @size: number of elements in the array array
 * @cmp: pointer to the function to be used to compare values
 * @array: where to search from
 * Return: Always 0 (Success)
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	unsigned int j;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	j = 0;
	while (j < size)
		j++;
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
