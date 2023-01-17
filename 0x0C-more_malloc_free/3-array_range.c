#include <stdio.h>
#include <stdlib.h>
#include "main.c"
#include <string.h>

/**
 * array_range - creates array of integers
 * @min: smallest
 * @max: largest
 *
 * Return: the pointer to new array
 */

int *array_range(int min, int max)
{
	int j, k;
	int *array;

	if (min > max)
		return (NULL);
	for (k = 0; k < (max - min); k++)
		;
	array = malloc(sizeof(int) * (k + 1));
	if (array == NULL)
		return (NULL);
	for (j = 0; j <= k; j++)
	{
		array[j] = min++;
	}
	return (array);
}
