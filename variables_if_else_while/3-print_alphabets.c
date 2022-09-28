#include <stdio.h>

/**
 * main - print the alphabet whit putchar
 *
 * Return: Always (0)
 */
int main(void)
{
	char a = 'a';
	char A = 'A';

	for (; a <= 'z'; a++)
	{
		putchar(a);
	}

	for (; A <= 'Z'; A++)
	{
		putchar(A);
	}
	putchar('\n');
	return (0);
}
