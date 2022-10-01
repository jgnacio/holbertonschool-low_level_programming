#include "main.h"
/**
 * print_last_digit - Write a function that prints the last digit of a number.
 * @n: integer for check
 *
 * description: Write a function that prints the 
 * last digit of a number.
 *
 * Return: Always :)
 */
int print_last_digit(int n)
{
	int result = n % 10;
	result = _abs(result);
	_putchar(result + '0');
	return (result);
}
