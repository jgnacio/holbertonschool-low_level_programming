#include "main.h"
/**
 * _islower - function that checks for lowercase character
 * @c: integer for check
 *
 * description: function that checks for lowercase character
 *
 * Return: The program should return 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
