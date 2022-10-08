#include "main.h"
#include <stdio.h>

int _strlen(char *s);

/**
 * puts_half - function that prints half of a string, followed by a new line.
 * @str: string to print
 *
 * Return: Always Nothing.
 */
void puts_half(char *str)
{
	int i;
	int len = _strlen(str) - 1;
	int half = (len - 1) / 2;

	if ((len - 1) % 2 != 0)
	{
		half--;
	}
	str += half + 1;
	for (i = half; i < len; i++)
	{
		_putchar(*str);
		str++;
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
