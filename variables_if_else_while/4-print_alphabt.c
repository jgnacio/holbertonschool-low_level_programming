#include <stdio.h>

/**
 * main - print the alphabet whit putchar
 *
 * Return: Always (0)
 */
int main(void)
{
	char a = 'a';

	for (; a <= 'z'; a++)
	{
		if (a == 'q')
		{
			continue;
		}
		else if (a == 'e')
		{
			continue;
		}
		putchar(a);
	}
	putchar('\n');
	return (0);
}
