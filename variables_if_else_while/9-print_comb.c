#include <stdio.h>

/**
 * main - print the alphabet whit putchar
 *
 * Return: Always (0)
 */
int main(void)
{
	int num = 48;

	for (; num <= 57; num++)
	{
		putchar(num);
		if (num == 57)
		{
			putchar('&');
			continue;	
		}
		putchar(',');
		putchar(' ');
	}

	putchar('\n');
	return (0);
}
