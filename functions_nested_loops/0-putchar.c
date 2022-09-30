#include "main.h"

/**
 * main - the start function
 *
 * description: Write a program that prints _putchar,
 * followed by a new line.
 *
 * Return: The program should return 0
 */
int main(void)
{
	char text[] = "_putchar";
	int i = 0;

	for (; i <= 7; i++)
	{
		_putchar(text[i]);
	}
	_putchar('\n');
	return (0);
}
