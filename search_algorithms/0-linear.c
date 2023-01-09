#include "search_algos.h"

/**
 * linear_search - function that search an element in an array
 * @array: array to search
 * @size: size of the array
 * @value: the value to search on array
 *
 * Return: the value find
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index;

	if (!array)
		return (-1);

	for (index = 0; index < size; index++)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (array[index] == value)
		{
			return (array[index]);
		}
	}
	return (-1);
}
