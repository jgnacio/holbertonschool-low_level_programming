#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: first pointer to swap
 * @b: second pointer to swap
 *
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}
