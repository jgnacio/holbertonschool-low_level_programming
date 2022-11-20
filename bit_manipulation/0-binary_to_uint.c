#include "main.h"
/**
 * binary_to_uint - Function that converts a binary number to an unsigned int.
 * @b: String number binary.
 * Return: number or 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] != '1' && b[i] != '0')
			return (0);
		number = number << 1;
		number = number + b[i] - '0';
	}

	return (number);
}
