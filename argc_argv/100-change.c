#include <stdio.h>
#include <stdlib.h>

int getmini(int v);
int _isdigit(char *d);
/**
 * main - program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: argc.
 * @argv: argv.
 *
 * Return: count of coins to give the change.
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
 * getmini - get the minimum number of coins to give the change.
 * @v: value of change.
 *
 * Return: the minimun of coins.
 */
int getmini(int v)
{
	int i = 0;
	int coins[] = {25, 10, 5, 2, 1};
	int sum = 0;
	int count_coins = 0;

	while (coins[i])
	{
		if (v >= coins[i] && v > sum && (sum + coins[i]) <= v)
		{
			sum += coins[i];
			count_coins++;
			/*printf("input:%d sum:%d, count:%d, coins[i]:%d\n", v, sum, count_coins, coins[i]);*/
			i = 0;
			continue;
		}
		i++;
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
