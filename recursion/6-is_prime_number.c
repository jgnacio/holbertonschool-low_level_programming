#include "main.h"

int prime_check(int a, int b);
/**
 * is_prime_number - function that returns 1 if the input integer
 * is a prime number, otherwise return 0.
 * @n: the number to check
 *
 * Return: 0 if not prime and 1.
 */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (prime_check(2, n));
}

/**
 * prime_check - function that veryfy the prime number
 * @a: a :)
 * @b: b :)
 *
 * Return: 0 if not a prime and 1.
 */
int prime_check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if(a > b / 2)
		return (1);
	else
		return (prime_check(a + 1, b));
}
