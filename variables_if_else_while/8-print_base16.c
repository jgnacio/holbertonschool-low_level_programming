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
	}
	num = 97;
	for (; num <= 102; num++)
	{
		putchar(num);
	}
	putchar('\n');
	return (0);
}
