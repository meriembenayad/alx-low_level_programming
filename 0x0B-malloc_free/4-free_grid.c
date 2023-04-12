#include "main.h"
/**
 * free_grid - free 2 dimentional grid
 * @grid: dimentional array
 * @height: height of the grid
 * Return: void
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
