#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * free_grid - free up memory of an array
 * @grid: targeted memory
 * @height: memory size
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int j;

	if (grid != NULL || height != 0)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[j]);
		}
		free(grid);
	}
}
