#include "main.h"


/**
 * alloc_grid - function that returns a pointer to a 2
 * dimensional array of integers.
 * @width: is the width of the array.
 * @height: is the height of the array.
 *
 * Return: full grid.
 */
int **alloc_grid(int width, int height)
{
	int **grid = NULL;
	int i;
	int x, y;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(*grid) * height);

	if (!grid)
		return (NULL);
	for (i = 0; i < height; i++)
		grid[i] = malloc(sizeof(int) * width);

	for (x = 0; x < height; x++)
	{
		for (y = 0; y < width; y++)
		{
			grid[x][y] = 0;
		}
	}
	return (grid);
}
