#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program.
 * @ac: Argument count.
 * @av: Argument vector.
 *
 * Return: Pointer to a string.
 */
char *argstostr(int ac, char **av)
{
	char *argstr = NULL;
	int i = 0, j = 0, k = 0;
	int count = 0;

	for (i = 0; i < ac; i++, count++)
		for (j = 0; av[i][j]; j++, count++)
		;
	;


	/* Reserve on memory the size require for alloc the words*/
	argstr = malloc(count + 1);

	if (argstr == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, k++)
	{
		for (j = 0; av[i][j]; j++, k++)
			argstr[k] = av[i][j];
		argstr[k] = '\n';
	}
	argstr[k] = '\0';

	return (argstr);
}
