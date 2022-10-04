#include <stdio.h>

/**
 * main - fizz buzz test
 * description: Write a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of three print Fizz instead
 * of the number and for the multiples of five print Buzz. For numbers
 * which are multiples of both three and five print FizzBuzz.
 * Each number or word should be separated by a space
 * @size: number the size of the square
 *
 * Return: nothing :)
 */
int main(void)
{
	int i = 14;

	for (i = 1; i <= 100; i++)
	{
		if (i % 5 == 0 && i % 3 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else if (i % 3 != 0)
		{
			printf("%d", i);
		}
		else
		{
			printf("Fizz");
		}
		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}