#include <stdio.h>
#include <stdlib.h>

int getmini(int v);
int _isdigit(char *d);
/**
 *
 *
 */
int main(int argc, char *argv[])
{
	int input = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	if (_isdigit(argv[1]))
	{
		input = atoi(argv[1]);
		printf("%d\n", getmini(input));
	}

	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
		return (0);
	}

	return (0);
}

/**
 *
 *
 *
 */
int getmini(int v)
{
	int i;
	int coins[] = {25, 10, 5, 2, 1};
	int sum = 0;
	int count_coins = 0;

	for (i = 0; coins[i]; i++)
	{
		if (v > coins[i] && v > sum && (sum + coins[i]) <= v)
		{
			sum += coins[i];
			count_coins++;
			i = -1;
		}
	}
	return (count_coins);
}

/**
 * _isdigit - function to check if it´s a number
 * @d: string to verify
 *
 * Return: 1 if is a number or 0 if not.
 */
int _isdigit(char *d)
{
	int i;

	for (i = 0; d[i]; i++)
	{
		if (d[i] < 48 || d[i] > 57)
		{
			return (0);
		}
	}
	return (1);
}
