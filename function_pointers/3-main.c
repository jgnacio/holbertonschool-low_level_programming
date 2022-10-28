#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "3-get_op_func.c"
/**
 * main - program that performs simple operations.
 * @argc: argument count.
 * @argv: argument vector.
 *
 * Return: 98 if the count of argument passed is not 3,
 * 99 if you used / or % and the num2 is 0, 100 if
 * operator passed not found on op functions.
 */
int main (int argc, char *argv[])
{

	int num1, num2;
	char *op;
	int i;
	int result = 0;

	if (argc > 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op = argv[2];

		if ((op != "/" || op != "%") && num2 != 0)
		{
			result = get_op_func(op)(num1,num2);
			printf("%d\n",get_op_func(op)(num1, num2));
		}
		else
		{
			printf("Error\n");
			exit(100);
		}
		return (0);
	}
	printf("Error\n");
	exit(98);
}
