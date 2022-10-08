#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * puts2 - function that prints every other character of a string,
 * starting with the first character, followed by a new line.
 * @str: string to print
 *
 * Return: Always Nothing.
 */
void puts2(char *str)
{
	int i;
	int len = _strlen(str);

	for (i = 1; i < len; i += 2)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

/**
 * _strlen - function that returns the length of a string.
 * @s: pointer to check
 *
 * Return: Always 0.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s = s + 1;
	}
	return (len);
}
