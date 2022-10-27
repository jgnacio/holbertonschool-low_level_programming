#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int strcountsymb(char *str);
int strcountword(char *str);
int _isalpha(int c);
/**
 *
 *
 *
 *
 */
char **strtow(char *str)
{

	char **strarray = NULL;
	int i = 0, j = 0, k = 0;
	int countsymb = 0;
	int countwords = 0;

	countwords = strcountword(str);
	
	strarray = malloc(sizeof(*strarray) * (countwords + 1)); 

	if (strarray == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
	{
		if (_isalpha(str[i]))
		{
			countsymb++;
		}
		else if (_isalpha(str[i - 1]) && i != 0)
		{
			strarray[j] = malloc(sizeof(char) * (countsymb + 1));
			j++;
			countsymb = 0;
		}
	}


	for (i = 0, j = 0, k = 0; str[i] && j < countwords; i++)
	{
		if (_isalpha(str[i]))
		{
			strarray[j][k] = str[i];
			k++;
		}
		else if (_isalpha(str[i - 1]) && i != 0)
		{
			strarray[j][k] = '\0';
			j++;
			k = 0;
		}
	}


	return (strarray);
}

int _isalpha(int c)
{
	if (c >= 33 && c <= 254)
	{
		return (1);
	}
	return (0);
}

int strcountword(char *str)
{
	int countword = 0, i = 0;

	for (i = 0; str[i]; i++)
	{
		if (_isalpha(str[i]))
		{
			continue;
		}
		else if (_isalpha(str[i - 1]) && i != 0)
		{
			countword++;
		}
	}
	return (countword);
}

int strcountsymb(char *str)
{
	int countsymb = 0, i = 0;

	for (i = 0; str[i]; i++)
	{
		if (_isalpha(str[i]))
		{
			countsymb++;
		}
	}

	return (countsymb);
}
