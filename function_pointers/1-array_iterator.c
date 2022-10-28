#include <stdio.h>
/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @array: array of integers.
 * @size: size of array.
 * @action: pointer to function.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	if (array && action)
	{
		while (i < size)
		{
			action(array[i]);
			i++;
		}
	}
}
