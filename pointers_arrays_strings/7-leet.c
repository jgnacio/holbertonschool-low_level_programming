#include <stdio.h>
#include "main.h"

/**
 * cap_string -  function that capitalizes all words of a string.
 * @str: string to set capitalize
 *
 * Return: String upper.
 */
char *leet(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == 'a' || str[i] == 'A')
		{
			str[i] = '4';
		}
		if(str[i] == 'e' || str[i] == 'E')
		{
			str[i] = '3';
		}
		if(str[i] == 'o' || str[i] == 'O')
		{
			str[i] = '0';
		}
		if(str[i] == 't' || str[i] == 'T')
		{
			str[i] = '7';
		}
		if(str[i] == 'l' || str[i] == 'L')
		{
			str[i] = '1';
		}
	}
	return (str);
}
