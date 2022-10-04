#include "main.h"

/**
 * print_line - Write a function that draws a straight line in the terminal.
 * @n: number the lines to print
 *
 * Return: nothing :)
 */
void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
