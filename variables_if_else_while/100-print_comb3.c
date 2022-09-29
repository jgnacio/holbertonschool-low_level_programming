#include <stdio.h>

/**
 * main - Program that prints all possible different combinations of two digits
 *
 * description: Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and 1
 * Print only the smallest combination of two digits
 * Numbers should be printed in ascending order, with two digits
 * You can only use the putchar function (every other function
 * (printf, puts, etc…) is forbidden)
 * You can only use putchar five times maximum in your code
 * You are not allowed to use any variable of type char
 * All your code should be in the main function
 *
 * Return: Allways (0)
 */
int main(void)
{
	int num = 48;
	int secNum = 48;

	for (; num <= 57; num++)
	{
		secNum = 48;
		for (; secNum <= 57; secNum++)
		{
			if (num < secNum)
			{
				putchar(num);
				putchar(secNum);
				if (num == 56 && secNum == 57)
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
