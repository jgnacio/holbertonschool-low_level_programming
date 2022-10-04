#include "main.h"

/**
 * more_numbers - Write a function that prints the numbers, from 0 to 9
 * , followed by a new line.
 * Do not print 2 and 4
 *
 * Return: result of a * b
 */
void more_numbers(void)
{
	int i;
	int j;

	for (j = 0; j <= 10; j++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
			{
				_putchar('1');
			}
			_putchar(i % 10 + '0');
		}
	_putchar('\n');
	}
}
