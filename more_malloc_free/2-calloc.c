#include <stdio.h>
#include <stdlib.h>

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: The number of elements to alocates memory.
 * @size: The size in bytes of the type element alocates.
 *
 * Return: A pointer to the new array.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *newarray = NULL;
	unsigned int i = 0;

	if (nmemb == 0 || size == 0)
		return (NULL);

	newarray = malloc(nmemb * size);

	if (newarray == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
		newarray[i] = 0;

	return (newarray);
}
