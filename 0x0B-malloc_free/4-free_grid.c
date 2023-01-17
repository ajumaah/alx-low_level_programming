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

	if (grid == NULL || height <= 0)
		return;
	for (j = 0; j < height; j++)
		free(grid[(height - 1) - j]);
	free(grid);
}
