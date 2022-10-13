#include <stdio.h>
#include "main.h"

/**
 * print_chessboard - function that locates a substring.
 * @a: array to print.
 *
 * Return: Nothing
 */
void print_chessboard(char (*a)[8])
{
	int i, j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			putchar(a[i][j]);
		}
		putchar('\n');
	}
}
