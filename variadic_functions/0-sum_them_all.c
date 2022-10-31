#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: the count of argument to set the va_list
 *
 * Return: The sum of all arguments
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i;
	int result = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		result += va_arg(ap, int);
	}

	va_end(ap);
	return (result);
}
