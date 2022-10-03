#include "main.h"

/**
 * _isdigit - Write a function that checks for a digit (0 through 9).
 * @c: character to check
 *
 * Return: 0 or 1
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}
