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

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	
	result = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", result);

	return result;
}
