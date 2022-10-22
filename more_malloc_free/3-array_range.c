#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - function that creates an array of integers.
 * @min: The initial number to fill the array.
 * @max: The end number to fill the array.
 *
 * Return: Array fill for integers of min to max.
 */
int *array_range(int min, int max)
{
	int *newarray = NULL;
	int i = 0;

	if (min > max)
		return (NULL);

	newarray = malloc((max - (min - 1)) * sizeof(int));

	if (newarray == NULL)
		return (NULL);

	for (i = 0; min <= max; i++, min++)
		newarray[i] = min;

	return (newarray);
}

