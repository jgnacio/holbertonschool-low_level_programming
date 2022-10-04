#include "main.h"

/**
 * print_triangle - Write a function that prints a triangle,
 * followed by a new line.
 * @size: is the size of the triangle
 * Return: nothing :)
 */
void print_triangle(int size)
{
	int j, spaces, fill;

	for (j = 0; j < size; j++)
	{
		spaces = size - (j + 1);
		fill = j;
		while (spaces > 0)
		{
			_putchar(' ');
			spaces--;
		}
		while (fill >= 0)
		{
			_putchar('#');
			fill--;
		}

		if (j != size - 1)
		{
			_putchar('\n');
		}
	}
	_putchar('\n');
}
