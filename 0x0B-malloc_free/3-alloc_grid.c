#include "main.h"
#include <stdlib.h>

/**
* alloc_grid - Allocates a 2-dimensional grid of integers and initializes it to 0.
* @width: The width of the grid.
* @height: The height of the grid.
*
* Return: If width or height is 0 or negative, or if memory allocation fails,
* returns NULL. Otherwise, returns a pointer to the newly allocated grid.
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
        return (NULL);

	grid = malloc(sizeof(int *) * height);

	if (grid == NULL)
	return (NULL);

	for (i = 0; i < height; i++)
{
	grid[i] = malloc(sizeof(int) * width);

	if (grid[i] == NULL)
        {
	/* Free previously allocated rows */
	for (j = 0; j < i; j++)
		free(grid[j]);
	/*free the grid itself */
	free(grid);
	return (NULL);
	}

	for (j = 0; j < width; j++)
		grid[i][j] = 0;
	}

	return (grid);
}
