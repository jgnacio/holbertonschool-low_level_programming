#include "main.h"

/**
 * _puts - function that prints a string, followed by a new line, to stdout.
 * @str: pointer char[] to check
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str = str + 1;
	}
	_putchar('\n');
}
