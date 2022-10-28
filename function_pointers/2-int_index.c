/**
 * int_index - function that searches for an integer.
 * @array: array of integers.
 * @size: the size of the array of integers.
 * @cmp: pointer to function that compare the integer.
 *
 * Return: index of the firts match integer, or -1 if fails.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;
	int match = 0;

	if (size < 0)
		return (-1);

	if (array && cmp)
	{
		while (i < size)
		{
			match = cmp(array[i]);
			if (match == 1)
				return (i);
			i++;
		}
	}
	return (-1);
}
