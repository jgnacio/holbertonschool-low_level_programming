#include "main.h"
/**
 * flip_bits - function that returns the number of bits you would need
 * to flip to get from one number to another.
 * @m: First number in decimal to flip.
 * @n: Second number in decimal to flip.
 * Return: count.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bed = 0;
	int count = 0;

	bed = m ^ n;

	while (bed)
	{
		bed = bed &  (bed - 1);
		count++;
	}
	return (count);
}
