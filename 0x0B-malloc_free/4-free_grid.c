#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *free_grid - a function that frees a 2 dimensional grid
 *
 *@grid: ponter to grid of int type
 *@height: int type input
 *
 *
 *Return: clean up memory
 */
void free_grid(int **grid, int height)
{
	int x;

	if (grid == NULL || grid == 0)
	{
		return;
	}
	for (x = 0; x < height; x++)
	{
		free(grid[x]);
	}
	free(grid);
}
