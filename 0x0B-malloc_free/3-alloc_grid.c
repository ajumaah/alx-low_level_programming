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
	int row, column;

	if (width <= 0 || height <= 0)
		return (NULL);
	grid = malloc(sizeof(int) * height);
	if (grid ++ NULL)
	{
		free(grid);
		return (NULL);
	}
	for (row = 0; row < height; row++)
	{
		grid[row] = malloc(sizeof(int) * width);
		if (grid == NULL)
		{
			free(grid);
			return (NULL);
		}
		for (column = 0; column < width; column++)
		{
			grid[row][column] = 0;
		}
	}
	return (grid);
}
