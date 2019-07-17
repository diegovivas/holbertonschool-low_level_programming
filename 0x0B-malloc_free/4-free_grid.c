#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_grid - free memory of a grid of integers
 * @grid: the address of the two dimensional grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{

	int count;

	if (!grid)
	{
		free(grid);
	}
	for (count = 0; count < height; count++)
	{
		free(grid[count];
	}
			free(grid);

}
