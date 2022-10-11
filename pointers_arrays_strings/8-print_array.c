#include <stdio.h>
#include "main.h"

/**
 * print_array - function that prints n elements of an array of integers,
 * followed by a new line.
 * @a: array to print.
 * @n: is the number of elements of the array to be printed
 *
 * Return: Nothing
 */
void print_array(int *a, int n)
{
	int i;
	if (n < 0)
	{
		n = 0;
	}

	for (i = 0; i < n; i++)
	{
		if (i == n - 1)
		{
			printf("%d\n", a[i]);
			break;
		}
		printf("%d, ", a[i]);
	}
}
