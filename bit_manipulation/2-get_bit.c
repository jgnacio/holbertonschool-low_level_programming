#include "main.h"
/**
 * get_bit - value of a bit at a given index
 * @index: index
 * @n: decimal
 * Return: 1 or 0 or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 33)
		return (-1);
	if (!n)
		return (-1);
	n = n >> index;
	if ((n & 1) == 0)
		return (0);
	else
		return (1);
}
