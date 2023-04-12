#include "main.h"
/**
 * **alloc_grid - pointer to a 2 dimensionnal array of integers
 * @width: width of the array
 * @height: height of the array
 * Return: pointer to 3 dimentional array (grid)
 */
int **alloc_grid(int width, int height)
{
	int **grid, i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (!grid)
	{
		free(grid);
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == 0)
		{
			for (j = 0; j < width; j++)
				free(grid[j]);
			free(grid);
			return (NULL);
		}

		for (j = 0; j < height; j++)
			grid[i][j] = 0;
	}
	return (grid);
}
