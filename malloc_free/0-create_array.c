#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: size of the array.
 * @c: char to put in every position.
 *
 * Return: a pointer of a new array.
 */
char *create_array(unsigned int size, char c)
{
	char *new_array = NULL;
	unsigned int i = 0;

	if (size != 0)
	{
		new_array = malloc((sizeof(char) * size));
		if (new_array == NULL)
			return (NULL);
		for (i = 0; i < size; i++)
		{
			new_array[i] = c;
		}
	}
	return (new_array);
}
