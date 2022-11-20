#include "main.h"
/**
 * print_binary - Function that prints the binary representation of a number.
 * @n: Number in decimal.
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + 48);
}
