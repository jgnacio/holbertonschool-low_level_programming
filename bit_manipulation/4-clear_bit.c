#include "main.h"
/**
 * clear_bit - Function that sets the value of a bit to 0 at a given index.
 * @n: Number in decimal
 * @index: The index to set zero.
 * Return: -1 error or 1 success.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 33)
		return (-1);
	*n = (*n & ~(1 << index));
	return (1);
}

