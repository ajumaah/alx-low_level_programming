#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a tw dimentional array integer
 * @width: The column
 * @height: The row
 * @grid: The location of the two dimensinal array
 *
 * Return: Always 0 (Success)
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int column, row, array = 0;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = (int **)malloc(sizeof(**grid) * height);
	if (grid == NULL)
		return (NULL);
	while (array < height)
		array++;
	{
		grid[array] = (int *)malloc(sizeof(int) * width);
		if (grid[array] == NULL)
		{
			while (array--)
				free(grid[array]);
			free(grid);
			return (NULL);
		}
	}
	for (row = 0; row < height; row++)
		for (column = 0; column < width; column++)
			grid[row][column] = 0;
	return (grid);
}
