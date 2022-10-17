#include <stdio.h>
#include <stdlib.h>

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

	for (i = 0; i < argc; i++)
	{
		result += atoi(argv[i]);
	}
	printf("%d\n", result);

	return (0);
}
