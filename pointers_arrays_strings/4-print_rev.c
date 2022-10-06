#include "main.h"

/**
 * print_rev - function that prints a string, followed by a new line, to stdout.
 * @str: pointer char[] to check
 *
 * Return: Always 0.
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
