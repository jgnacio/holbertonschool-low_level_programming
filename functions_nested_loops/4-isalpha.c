#include "main.h"
/**
 * _isalpha - Write a function that checks for alphabetic character.
 * @c: integer for check
 *
 * description: Write a function that checks for alphabetic character.
 *
 * Return: The program should return 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (0);
}
