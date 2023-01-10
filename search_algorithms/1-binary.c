#include "search_algos.h"

/**
 * binary_search - function that search a value on array with binary search
 * @array: array to find the value
 * @size: the array size
 * @value: integer to search
 *
 * Return: index of the value search(success), -1(fail).
 */
int binary_search(int *array, size_t size, int value)
{
	size_t start = 0,
				 end = size - 1,
				 index;

	if (!array && end)
		return (-1);

	while (end >= start)
	{
		printf("Searching in array: ");
		for (index = start; index < end; index++)
			printf("%d, ", array[index]);
		printf("%d\n", array[index]);

		index = start + (end - start) / 2;
		if (array[index] == value)
			return (index);

		if (array[index] > value)
			end = index - 1;
		else
			start = index + 1;
	}
	return (-1);
}
