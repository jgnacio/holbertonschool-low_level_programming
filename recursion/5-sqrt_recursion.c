#include "main.h"

int check_sqrt(int a, int b);
/**
 *
 *
 *
 *
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return check_sqrt(1, n);
}

/**
 *
 *
 *
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return check_sqrt(a + 1, b);
}
