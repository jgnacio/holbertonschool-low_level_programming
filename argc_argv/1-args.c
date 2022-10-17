#include <stdio.h>

/**
 * main - program that prints its name, followed by a new line.
 * @argc: argc.
 * @argv: argv.
 *
 * Return: 0.
 */
int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);
	return (0);
}
