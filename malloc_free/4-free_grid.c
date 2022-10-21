#include "main.h"


/**
 * free_grid - function to free a dynamic 2 dimencional array.
 * @grid: is a dynamic 2 dimencional array
 * @height: the first pointers pointing to the second dimencion
 *
 * Return: Nothing :).
 */
void free_grid(int **grid, int height)
{
	if (grid == NULL)
		return (NULL);
	for (; height >= 0; height--)
		free(grid[height]);
	free(grid);
}
