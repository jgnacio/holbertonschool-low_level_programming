#include <stdio.h>
#include <stdlib.h>

int _isdigit(char *d);
/**
 * main - program that prints its name, followed by a new line.
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
 */
int main(int argc, char *argv[])
{
	int result;
	int i;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1, result = 0; i < argc; i++)
	{
		if (_isdigit(argv[i]))
			result += atoi(argv[i]);
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);
	return (0);
}

/**
 * _isdigit - function to check if it´s a number
 * @d: string to verify
 *
 * Return: 1 if is a number or 0 if not.
 */
int _isdigit(char *d)
{
	int i;

	for (i = 0; d[i]; i++)
	{
		if (d[i] < 48 || d[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}
