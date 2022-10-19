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
		if (new_array)
		{
			new_array = malloc((sizeof(char) * size));
			for (i = 0; i < size; i++)
			{
				new_array[i] = c;
			}
		}
	}
	else
		return (new_array);
	return (new_array);
}