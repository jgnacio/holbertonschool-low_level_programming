#include "main.h"

/**
 * print_alphabet - print the alphabet, in lowecase
 *
 * description: Write a function that prints the alphabet, in lowercase,
 * followed by a new line.
 *
 * Return: The program should return 0
 */
void print_alphabet_x10(void)
{
	char text[] = "abcdefghijklmnopqrstuvwxyz";
	int i = 0;
	int j = 0;

	for (; j < 10; j++)
	{
		i = 0;
		for (; i < 26; i++)
		{
			_putchar(text[i]);
		}
		_putchar('\n');
	}
}
