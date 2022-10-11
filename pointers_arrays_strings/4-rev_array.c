#include <stdio.h>
#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers.
 * @a: array to reverse
 * @n: the number of elements of the array
 *
 * Return: Nothing
 */
void reverse_array(int *a, int n)
{
	int len = n - 1;
	int j;
	int aux;
	int half = len / 2;

	for (j = 0; j < half; j++)
	{
		aux = a[j];
		a[j] = a[len];
		a[len] = aux;
		len--;
	}
}
