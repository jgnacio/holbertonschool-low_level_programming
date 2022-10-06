#include "main.h"

/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: pointer char[] to check
 *
 * Return: nothing.
 */
void print_rev(char *s)
{
	int add_index = 0;

	while (*s)
	{
		s = s + 1;
		add_index++;
	}
	while (add_index > 0)
	{
		s = s - 1;
		_putchar(*s);
		add_index--;
	}
	_putchar('\n');
}
