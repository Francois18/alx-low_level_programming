#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - return a 2D array
* @width: parameter
* @height: parameter
* Return: int
*/
int **alloc_grid(int width, int height)
{
	int **grid, i;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid =  (int **) malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(width * sizeof(int));
		if (grid[i] == NULL)
		{
			while (i >= 0)
			{
				free(grid[i]);
				i--;
			}
			free(grid);
			return (NULL);
		}
	}
	return (grid);
}
