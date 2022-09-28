#include <stdio.h>

/**
 * main - print the alphabet whit putchar
 *
 * Return: Always (0)
 */
int main(void)
{
	int num = 122;

	for (; num >= 97; num--)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
