#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *
 *
 *
 *
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int) * height);

	if (!grid)
		return (NULL);
	else
	{
		for (i = 0; i <= height; i++)
		{
			grid[i] = malloc(sizeof(int) * width);
		}

		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
			{
				grid[x][y] = 0;
			}
		}
	}
	return(grid);
}
