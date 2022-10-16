#include "main.h"

int check_sqrt(int a, int b);
/**
 * _sqrt_recursion - function that returns the natural square
 * root of a number.
 * @n: number to calculate the sqrt
 *
 * Return: the sqrt of n.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);

	return (check_sqrt(1, n));
}

/**
 * check_sqrt - function that check sqrt.
 * @a: number to multiply and check if is b
 * @b: number inside the sqrt
 *
 * Return: -1 if not is the sqrti, and the sqrt.
 */
int check_sqrt(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check_sqrt(a + 1, b));
}
