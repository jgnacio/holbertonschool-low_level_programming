#include "3-calc.h"
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
	int result = 0;

	if (argc > 3)
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[3]);
		op = argv[2];

		if ((op[0] != '/' || op[0] != '%') && num2 != 0)
		{
			result = get_op_func(op)(num1,num2);
			printf("%d\n", result);
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
