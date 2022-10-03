#include "main.h"

/**
 * times_table - xd
 * Return: 0,
 */
void times_table(void)
{
	int h, m, f;

	for (h = 0; h < 10; h++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
		for (m = 1; m < 10; m++)
		{
			f = h * m;
			if (f / 10 == 0)
				_putchar(' ');
			else
				_putchar (f / 10 + '0');
			_putchar (f % 10 + '0');
			if (m < 9)
			{
				_putchar (',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
