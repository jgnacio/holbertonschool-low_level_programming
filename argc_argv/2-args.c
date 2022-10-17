#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
 */
int main(__attribute__((unused)) int argc, char *argv[])
{
	int i = 0;

	for (i = 0; argv[i];i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
