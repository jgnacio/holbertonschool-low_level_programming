#include <stdio.h>
#include "main.h"

/**
 * print_diagsums - function that prints the sum of the two diagonals of a
 * square matrix of integers.
 * @a: matrix to make the num
 * @size: the size of the matrix
 */
void print_diagsums(int *a, int size)
{
	int i;
	int first_diag = 1;
	int second_diag = size;
	int num1 = a[0];
	int num2 = a[size - 1];

	for (i = 0; i < size * size; i++)
	{
		if (i != 0 && i % size == 0)
		{
			first_diag = first_diag + size;
			second_diag = second_diag + size;
			first_diag++;
			second_diag--;
			num1 += a[first_diag - 1];
			num2 += a[second_diag - 1];
		}
	}
	printf("%d, %d\n", num1, num2);
}
