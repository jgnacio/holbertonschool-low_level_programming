#include <stdlib.h>
#include <stdio.h>
#include "3-calc.h"
#include "3-op_functions.c"

/**
 * get_op_func - function that get the operator selected on main program.
 * @s: string is the operator passed.
 *
 * Return: A pointer of a function match operator.
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	
	while(ops[i].op)
	{
		if (ops[i].op[0] == s[0])
		{
			return (ops[i].f);
		}
		i++;
	}
	printf("Error\n");
	exit(99);

	return (NULL);
}
