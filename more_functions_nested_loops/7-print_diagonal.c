#include "main.h"

/**
 * print_diagonal - Write a function that draws a diagonal line on the
 * terminal.
 * @n: number the diagonal to print
 *
 * Return: nothing :)
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
		{
		for (i = 0; i < n; i++)
		{
			for (j = i; j > 0; j--)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (i != n - 1)
			{
				_putchar('\n');
			}
		}
	}
	_putchar('\n');
}
