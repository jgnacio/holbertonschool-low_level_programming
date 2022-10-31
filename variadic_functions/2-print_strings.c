#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to separate the words.
 * @n: the argument before than
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	char *aux;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		aux = va_arg(ap, char*);
		if (aux == NULL)
			printf("(nil)");
		else
			printf("%s", aux);
		if (separator && i < n - 1)
			printf("%s", separator);
	}
	printf("\n");
}
