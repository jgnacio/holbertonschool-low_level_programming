#include "main.h"
/**
 * jack_bauer - Write a function that prints every
 * minute of the day of Jack Bauer, starting from 00:00 to 23:59.
 *
 * description: Write a function that prints the
 * last digit of a number.
 *
 * Return: Nothing :)
 */
void jack_bauer(void)
{
	int i, j, k, l;
	int count_hours = 9;

	for (i = 0; i <= 2; i++)
	{
		if (i > 1)
		{
		count_hours = 3;
		}
		for (j = 0; j <= count_hours; j++)
		{
			for (k = 0; k <= 5; k++)
			{
				for (l = 0; l <= 9; l++)
				{
					_putchar(i + '0');
					_putchar(j + '0');
					_putchar(':');
					_putchar(k + '0');
					_putchar(l + '0');
					_putchar('\n');
				}
			}
		}
	}
}
